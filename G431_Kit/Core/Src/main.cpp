#include <stm32g431_sys.h>
#include <stm32g431_gpio.h>
#include <stm32g431_usart.h>
#include <stm32g431_i2c.h>

#define ARM_MATH_M4
extern "C" {
#include <arm_math.h>
}

#include <stdio.h>
#include <math.h>

#include <ssd1306.h>

#define LD2					PB8

#define LSM6_ADDR			0x6A
#define REG_WHO_AM_I 		0x0F
#define REG_CTRL1			0x10
#define REG_CTRL2 			0x11
#define REG_CTRL6 			0x15
#define REG_CTRL8		 	0x17
#define REG_OUTX_L_G		0x22

SysError_t writeReg(uint8_t reg, uint8_t val);
SysError_t readRegs(uint8_t reg, uint8_t* databuf, uint8_t datasize);

bool lsm6_init(void);
SysError_t readSensor(float* gx, float* gy, float* gz, float* ax, float* ay, float* az);

void USART2_Transmit_CmpltCallback(void);
void USART2_Receive_CmpltCallback(void);

static bool usart2_tx_req	= false;
static bool usart2_tx_state = false;
static bool usart2_rx_req	= false;
static bool usart2_rx_state = false;

I2C i2c1(I2C1, PA15, PB7);

int main(void)
{
	uint8_t cnt = 0;

	RCC_Init();

	pinMode(LD2, OUTPUT);

	Serial.init(115200);
	Serial.setCallback(USART_TX_COMPLETE, USART2_Transmit_CmpltCallback);
	Serial.setCallback(USART_RX_COMPLETE, USART2_Receive_CmpltCallback);

	i2c1.init(400000);

	for(uint8_t i = 0; i <= 0x7F; i++) {
		if(i2c1.addressMatch(i) == true) {
			printf("Find %x\n", i);
			cnt++;
		}
	}
	if(cnt == 0) {
		printf("not found\n");
	}

	OLED_Init(&i2c1, OLED_Init_Data, sizeof(OLED_Init_Data));
	OLED_Thrcot_Large_Logo_Display(&i2c1);
	delay_ms(1000);
	OLED_AllClear(&i2c1);

	if (!lsm6_init()) {
		printf("LSM6DSV16X init error!\n");
	    while (1);
	}

	printf("LSM6DSV16X initialized.\n");

	while(1)
	{
		float ax, ay, az, gx, gy, gz;
		SysError_t err;

		err = readSensor(&gx, &gy, &gz, &ax, &ay, &az);

		printf("err:%d ", (int)err);
		printf("ax:%3.3f ay:%3.3f az:%3.3f gx:%3.3f gy:%3.3f gz:%3.3f\n", ax, ay, az, gx, gy, gz);

		delay_ms(10);
	}

	return 0;
}

SysError_t writeReg(uint8_t reg, uint8_t val)
{
	uint8_t sendbuf[] = {reg, val};

	return i2c1.masterTransmit(LSM6_ADDR, sendbuf, 2, 500);
}

SysError_t readRegs(uint8_t reg, uint8_t* databuf, uint8_t datasize)
{
	return i2c1.memRead(LSM6_ADDR, reg, false, databuf, datasize, 500);
}

bool lsm6_init(void)
{
  uint8_t who;

  readRegs(REG_WHO_AM_I, &who, 1);
  printf("WHO_AM_I = 0x%x\n", who);
  if (who != 0x70) {
	  return false;
  }

  writeReg(REG_CTRL1, 0b00001001);
  writeReg(REG_CTRL2, 0b00001001);
  writeReg(REG_CTRL6, 0b00000100);
  writeReg(REG_CTRL8, 0b10000010);
  delay_ms(10);

  return true;
}

SysError_t readSensor(float* gx, float* gy, float* gz, float* ax, float* ay, float* az)
{
  uint8_t rawdata[12];
  int16_t convdata[6];
  SysError_t err;

  err = readRegs(REG_OUTX_L_G, rawdata, 12);
  for(uint8_t i = 0; i < 6; i++) {
	  convdata[i] = (rawdata[i * 2 + 1] << 8 | rawdata[i * 2]);
  }

  *gx = (float)convdata[0] * 0.07f;
  *gy = (float)convdata[1] * 0.07f;
  *gz = (float)convdata[2] * 0.07f;
  *ax = (float)convdata[3] * 0.000244f;
  *ay = (float)convdata[4] * 0.000244f;
  *az = (float)convdata[5] * 0.000244f;

  return err;
}

void USART2_Transmit_CmpltCallback(void)
{
	usart2_tx_state = true;
}

void USART2_Receive_CmpltCallback(void)
{
	usart2_rx_state = true;
}

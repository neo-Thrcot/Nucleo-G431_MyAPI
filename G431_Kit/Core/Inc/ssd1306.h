/*
 * ssd1306.h
 *
 *  Created on: May 9, 2026
 *      Author: neoki
 */

#ifndef INC_SSD1306_H_
#define INC_SSD1306_H_

#include <stdio.h>
#include <math.h>
#include <stm32g431_i2c.h>
#include <ssd1306_font.h>

#define OLED_ADR (0x3C)

#define PI 3.1415926535

extern uint8_t OLED_Init_Data[30];
extern uint8_t All_Display_Data[8][129];

long map(long x, long min_in, long max_in, long min_out, long max_out);
uint8_t Changing_Y_page(int Y);
uint8_t Changing_Y_val(int Y);

SysError_t OLED_Init(I2C *hi2c, uint8_t *Init_data, int size);
void OLED_Display(I2C *hi2c);
void OLED_Thrcot_Logo_Display(I2C *hi2c);
void OLED_Thrcot_Large_Logo_Display(I2C *hi2c);
void OLED_Dot_Display(int x, int y);
void OLED_Horizontal_Display(int x_s, int x_e, int y);
void OLED_Vartical_Display(int y_s, int y_e, int x);
void OLED_Line_Display(int x_s, int y_s, int x_e, int y_e);
void OLED_Circle_Draw(int x_0, int y_0, int radiation);
void OLED_DataClear(void);
void OLED_AllClear(I2C *hi2c);

void OLED_Char_Print(char *message, int x, int y);
void OLED_Int_Print(int val, int x, int y);
void OLED_Double_Print(double val, int x, int y);
void OLED_Hex_Print(uint8_t val, int x, int y);

#endif /* INC_SSD1306_H_ */

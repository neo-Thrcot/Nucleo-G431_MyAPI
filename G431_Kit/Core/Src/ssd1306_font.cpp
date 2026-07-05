#include <ssd1306_font.h>

void Font_Space(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x00;
	Font_Data[2] = 0x00;
	Font_Data[3] = 0x00;
	Font_Data[4] = 0x00;
	Font_Data[5] = 0x00;
}

void Font_Exclamation(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x00;
	Font_Data[2] = 0x5F;
	Font_Data[3] = 0x00;
	Font_Data[4] = 0x00;
	Font_Data[5] = 0x00;
}

void Font_Double_Quotation(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x07;
	Font_Data[2] = 0x00;
	Font_Data[3] = 0x07;
	Font_Data[4] = 0x00;
	Font_Data[5] = 0x00;
}

void Font_Sharp(uint8_t *Font_Data)
{
	Font_Data[0] = 0x14;
	Font_Data[1] = 0x7F;
	Font_Data[2] = 0x14;
	Font_Data[3] = 0x7F;
	Font_Data[4] = 0x14;
	Font_Data[5] = 0x00;
}

void Font_Dollar(uint8_t *Font_Data)
{
	Font_Data[0] = 0x24;
	Font_Data[1] = 0x2A;
	Font_Data[2] = 0x7F;
	Font_Data[3] = 0x2A;
	Font_Data[4] = 0x12;
	Font_Data[5] = 0x00;
}

void Font_Percent(uint8_t *Font_Data)
{
	Font_Data[0] = 0x23;
	Font_Data[1] = 0x13;
	Font_Data[2] = 0x08;
	Font_Data[3] = 0x64;
	Font_Data[4] = 0x62;
	Font_Data[5] = 0x00;
}

void Font_And(uint8_t *Font_Data)
{
	Font_Data[0] = 0x36;
	Font_Data[1] = 0x49;
	Font_Data[2] = 0x56;
	Font_Data[3] = 0x20;
	Font_Data[4] = 0x50;
	Font_Data[5] = 0x00;
}

void Font_Single_Quotation(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x08;
	Font_Data[2] = 0x07;
	Font_Data[3] = 0x03;
	Font_Data[4] = 0x00;
	Font_Data[5] = 0x00;
}

void Font_Left_Bracket(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x1C;
	Font_Data[2] = 0x22;
	Font_Data[3] = 0x41;
	Font_Data[4] = 0x00;
	Font_Data[5] = 0x00;
}

void Font_Right_Bracket(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x41;
	Font_Data[2] = 0x22;
	Font_Data[3] = 0x1C;
	Font_Data[4] = 0x00;
	Font_Data[5] = 0x00;
}

void Font_Asterisk(uint8_t *Font_Data)
{
	Font_Data[0] = 0x2A;
	Font_Data[1] = 0x1C;
	Font_Data[2] = 0x7F;
	Font_Data[3] = 0x1C;
	Font_Data[4] = 0x2A;
	Font_Data[5] = 0x00;
}

void Font_Plus(uint8_t *Font_Data)
{
	Font_Data[0] = 0x08;
	Font_Data[1] = 0x08;
	Font_Data[2] = 0x3E;
	Font_Data[3] = 0x08;
	Font_Data[4] = 0x08;
	Font_Data[5] = 0x00;
}
void Font_Comma(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x80;
	Font_Data[2] = 0x70;
	Font_Data[3] = 0x30;
	Font_Data[4] = 0x00;
	Font_Data[5] = 0x00;
}

void Font_Minus(uint8_t *Font_Data)
{
	Font_Data[0] = 0x08;
	Font_Data[1] = 0x08;
	Font_Data[2] = 0x08;
	Font_Data[3] = 0x08;
	Font_Data[4] = 0x08;
	Font_Data[5] = 0x00;
}

void Font_Period(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x00;
	Font_Data[2] = 0x60;
	Font_Data[3] = 0x60;
	Font_Data[4] = 0x00;
	Font_Data[5] = 0x00;
}

void Font_Slash(uint8_t *Font_Data)
{
	Font_Data[0] = 0x20;
	Font_Data[1] = 0x10;
	Font_Data[2] = 0x08;
	Font_Data[3] = 0x04;
	Font_Data[4] = 0x02;
	Font_Data[5] = 0x00;
}

void Font_0(uint8_t *Font_Data)
{
	Font_Data[0] = 0x3E;
	Font_Data[1] = 0x51;
	Font_Data[2] = 0x49;
	Font_Data[3] = 0x45;
	Font_Data[4] = 0x3E;
	Font_Data[5] = 0x00;
}

void Font_1(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x42;
	Font_Data[2] = 0x7F;
	Font_Data[3] = 0x40;
	Font_Data[4] = 0x00;
	Font_Data[5] = 0x00;
}

void Font_2(uint8_t *Font_Data)
{
	Font_Data[0] = 0x72;
	Font_Data[1] = 0x49;
	Font_Data[2] = 0x49;
	Font_Data[3] = 0x49;
	Font_Data[4] = 0x46;
	Font_Data[5] = 0x00;
}

void Font_3(uint8_t *Font_Data)
{
	Font_Data[0] = 0x21;
	Font_Data[1] = 0x41;
	Font_Data[2] = 0x49;
	Font_Data[3] = 0x4D;
	Font_Data[4] = 0x33;
	Font_Data[5] = 0x00;
}

void Font_4(uint8_t *Font_Data)
{
	Font_Data[0] = 0x18;
	Font_Data[1] = 0x14;
	Font_Data[2] = 0x12;
	Font_Data[3] = 0x7F;
	Font_Data[4] = 0x10;
	Font_Data[5] = 0x00;
}

void Font_5(uint8_t *Font_Data)
{
	Font_Data[0] = 0x27;
	Font_Data[1] = 0x45;
	Font_Data[2] = 0x45;
	Font_Data[3] = 0x45;
	Font_Data[4] = 0x39;
	Font_Data[5] = 0x00;
}

void Font_6(uint8_t *Font_Data)
{
	Font_Data[0] = 0x3C;
	Font_Data[1] = 0x4A;
	Font_Data[2] = 0x49;
	Font_Data[3] = 0x49;
	Font_Data[4] = 0x31;
	Font_Data[5] = 0x00;
}

void Font_7(uint8_t *Font_Data)
{
	Font_Data[0] = 0x41;
	Font_Data[1] = 0x21;
	Font_Data[2] = 0x11;
	Font_Data[3] = 0x09;
	Font_Data[4] = 0x07;
	Font_Data[5] = 0x00;
}

void Font_8(uint8_t *Font_Data)
{
	Font_Data[0] = 0x36;
	Font_Data[1] = 0x49;
	Font_Data[2] = 0x49;
	Font_Data[3] = 0x49;
	Font_Data[4] = 0x36;
	Font_Data[5] = 0x00;
}

void Font_9(uint8_t *Font_Data)
{
	Font_Data[0] = 0x46;
	Font_Data[1] = 0x49;
	Font_Data[2] = 0x49;
	Font_Data[3] = 0x29;
	Font_Data[4] = 0x1E;
	Font_Data[5] = 0x00;
}

void Font_Colon(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x00;
	Font_Data[2] = 0x14;
	Font_Data[3] = 0x00;
	Font_Data[4] = 0x00;
	Font_Data[5] = 0x00;
}

void Font_Semicolon(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x40;
	Font_Data[2] = 0x34;
	Font_Data[3] = 0x00;
	Font_Data[4] = 0x00;
	Font_Data[5] = 0x00;
}

void Font_Smaller(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x08;
	Font_Data[2] = 0x14;
	Font_Data[3] = 0x22;
	Font_Data[4] = 0x41;
	Font_Data[5] = 0x00;
}

void Font_Equal(uint8_t *Font_Data)
{
	Font_Data[0] = 0x14;
	Font_Data[1] = 0x14;
	Font_Data[2] = 0x14;
	Font_Data[3] = 0x14;
	Font_Data[4] = 0x14;
	Font_Data[5] = 0x00;
}

void Font_Bigger(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x41;
	Font_Data[2] = 0x22;
	Font_Data[3] = 0x14;
	Font_Data[4] = 0x08;
	Font_Data[5] = 0x00;
}

void Font_Question(uint8_t *Font_Data)
{
	Font_Data[0] = 0x02;
	Font_Data[1] = 0x01;
	Font_Data[2] = 0x59;
	Font_Data[3] = 0x09;
	Font_Data[4] = 0x06;
	Font_Data[5] = 0x00;
}

void Font_At_Mark(uint8_t *Font_Data)
{
	Font_Data[0] = 0x3E;
	Font_Data[1] = 0x41;
	Font_Data[2] = 0x5D;
	Font_Data[3] = 0x59;
	Font_Data[4] = 0x4E;
	Font_Data[5] = 0x00;
}

void Font_Large_A(uint8_t *Font_Data)
{
	Font_Data[0] = 0x7C;
	Font_Data[1] = 0x12;
	Font_Data[2] = 0x11;
	Font_Data[3] = 0x12;
	Font_Data[4] = 0x7C;
	Font_Data[5] = 0x00;
}

void Font_Large_B(uint8_t *Font_Data)
{
	Font_Data[0] = 0x7F;
	Font_Data[1] = 0x49;
	Font_Data[2] = 0x49;
	Font_Data[3] = 0x49;
	Font_Data[4] = 0x36;
	Font_Data[5] = 0x00;
}

void Font_Large_C(uint8_t *Font_Data)
{
	Font_Data[0] = 0x3E;
	Font_Data[1] = 0x41;
	Font_Data[2] = 0x41;
	Font_Data[3] = 0x41;
	Font_Data[4] = 0x22;
	Font_Data[5] = 0x00;
}

void Font_Large_D(uint8_t *Font_Data)
{
	Font_Data[0] = 0x7F;
	Font_Data[1] = 0x41;
	Font_Data[2] = 0x41;
	Font_Data[3] = 0x41;
	Font_Data[4] = 0x3E;
	Font_Data[5] = 0x00;
}

void Font_Large_E(uint8_t *Font_Data)
{
	Font_Data[0] = 0x7F;
	Font_Data[1] = 0x49;
	Font_Data[2] = 0x49;
	Font_Data[3] = 0x49;
	Font_Data[4] = 0x41;
	Font_Data[5] = 0x00;
}

void Font_Large_F(uint8_t *Font_Data)
{
	Font_Data[0] = 0x7F;
	Font_Data[1] = 0x09;
	Font_Data[2] = 0x09;
	Font_Data[3] = 0x09;
	Font_Data[4] = 0x01;
	Font_Data[5] = 0x00;
}

void Font_Large_G(uint8_t *Font_Data)
{
	Font_Data[0] = 0x3E;
	Font_Data[1] = 0x41;
	Font_Data[2] = 0x41;
	Font_Data[3] = 0x51;
	Font_Data[4] = 0x73;
	Font_Data[5] = 0x00;
}

void Font_Large_H(uint8_t *Font_Data)
{
	Font_Data[0] = 0x7F;
	Font_Data[1] = 0x08;
	Font_Data[2] = 0x08;
	Font_Data[3] = 0x08;
	Font_Data[4] = 0x7F;
	Font_Data[5] = 0x00;
}

void Font_Large_I(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x41;
	Font_Data[2] = 0x7F;
	Font_Data[3] = 0x41;
	Font_Data[4] = 0x00;
	Font_Data[5] = 0x00;
}

void Font_Large_J(uint8_t *Font_Data)
{
	Font_Data[0] = 0x20;
	Font_Data[1] = 0x40;
	Font_Data[2] = 0x41;
	Font_Data[3] = 0x3F;
	Font_Data[4] = 0x01;
	Font_Data[5] = 0x00;
}

void Font_Large_K(uint8_t *Font_Data)
{
	Font_Data[0] = 0x7F;
	Font_Data[1] = 0x08;
	Font_Data[2] = 0x14;
	Font_Data[3] = 0x22;
	Font_Data[4] = 0x41;
	Font_Data[5] = 0x00;
}

void Font_Large_L(uint8_t *Font_Data)
{
	Font_Data[0] = 0x7F;
	Font_Data[1] = 0x40;
	Font_Data[2] = 0x40;
	Font_Data[3] = 0x40;
	Font_Data[4] = 0x40;
	Font_Data[5] = 0x00;
}

void Font_Large_M(uint8_t *Font_Data)
{
	Font_Data[0] = 0x7F;
	Font_Data[1] = 0x02;
	Font_Data[2] = 0x1C;
	Font_Data[3] = 0x02;
	Font_Data[4] = 0x7F;
	Font_Data[5] = 0x00;
}

void Font_Large_N(uint8_t *Font_Data)
{
	Font_Data[0] = 0x7F;
	Font_Data[1] = 0x04;
	Font_Data[2] = 0x08;
	Font_Data[3] = 0x10;
	Font_Data[4] = 0x7F;
	Font_Data[5] = 0x00;
}

void Font_Large_O(uint8_t *Font_Data)
{
	Font_Data[0] = 0x3E;
	Font_Data[1] = 0x41;
	Font_Data[2] = 0x41;
	Font_Data[3] = 0x41;
	Font_Data[4] = 0x3E;
	Font_Data[5] = 0x00;
}

void Font_Large_P(uint8_t *Font_Data)
{
	Font_Data[0] = 0x7F;
	Font_Data[1] = 0x09;
	Font_Data[2] = 0x09;
	Font_Data[3] = 0x09;
	Font_Data[4] = 0x06;
	Font_Data[5] = 0x00;
}

void Font_Large_Q(uint8_t *Font_Data)
{
	Font_Data[0] = 0x3E;
	Font_Data[1] = 0x41;
	Font_Data[2] = 0x51;
	Font_Data[3] = 0x21;
	Font_Data[4] = 0x5E;
	Font_Data[5] = 0x00;
}

void Font_Large_R(uint8_t *Font_Data)
{
	Font_Data[0] = 0x7F;
	Font_Data[1] = 0x09;
	Font_Data[2] = 0x19;
	Font_Data[3] = 0x29;
	Font_Data[4] = 0x46;
	Font_Data[5] = 0x00;
}

void Font_Large_S(uint8_t *Font_Data)
{
	Font_Data[0] = 0x26;
	Font_Data[1] = 0x49;
	Font_Data[2] = 0x49;
	Font_Data[3] = 0x49;
	Font_Data[4] = 0x32;
	Font_Data[5] = 0x00;
}

void Font_Large_T(uint8_t *Font_Data)
{
	Font_Data[0] = 0x03;
	Font_Data[1] = 0x01;
	Font_Data[2] = 0x7F;
	Font_Data[3] = 0x01;
	Font_Data[4] = 0x03;
	Font_Data[5] = 0x00;
}

void Font_Large_U(uint8_t *Font_Data)
{
	Font_Data[0] = 0x3F;
	Font_Data[1] = 0x40;
	Font_Data[2] = 0x40;
	Font_Data[3] = 0x40;
	Font_Data[4] = 0x3F;
	Font_Data[5] = 0x00;
}

void Font_Large_V(uint8_t *Font_Data)
{
	Font_Data[0] = 0x1F;
	Font_Data[1] = 0x20;
	Font_Data[2] = 0x40;
	Font_Data[3] = 0x20;
	Font_Data[4] = 0x1F;
	Font_Data[5] = 0x00;
}

void Font_Large_W(uint8_t *Font_Data)
{
	Font_Data[0] = 0x3F;
	Font_Data[1] = 0x40;
	Font_Data[2] = 0x38;
	Font_Data[3] = 0x40;
	Font_Data[4] = 0x3F;
	Font_Data[5] = 0x00;
}

void Font_Large_X(uint8_t *Font_Data)
{
	Font_Data[0] = 0x63;
	Font_Data[1] = 0x14;
	Font_Data[2] = 0x08;
	Font_Data[3] = 0x14;
	Font_Data[4] = 0x63;
	Font_Data[5] = 0x00;
}

void Font_Large_Y(uint8_t *Font_Data)
{
	Font_Data[0] = 0x03;
	Font_Data[1] = 0x04;
	Font_Data[2] = 0x78;
	Font_Data[3] = 0x04;
	Font_Data[4] = 0x03;
	Font_Data[5] = 0x00;
}

void Font_Large_Z(uint8_t *Font_Data)
{
	Font_Data[0] = 0x61;
	Font_Data[1] = 0x59;
	Font_Data[2] = 0x49;
	Font_Data[3] = 0x4D;
	Font_Data[4] = 0x43;
	Font_Data[5] = 0x00;
}

void Font_Left_Square_Bracket(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x7F;
	Font_Data[2] = 0x41;
	Font_Data[3] = 0x41;
	Font_Data[4] = 0x41;
	Font_Data[5] = 0x00;
}

void Font_Back_Slash(uint8_t *Font_Data)
{
	Font_Data[0] = 0x02;
	Font_Data[1] = 0x04;
	Font_Data[2] = 0x08;
	Font_Data[3] = 0x10;
	Font_Data[4] = 0x20;
	Font_Data[5] = 0x00;
}

void Font_Right_Square_Bracket(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x41;
	Font_Data[2] = 0x41;
	Font_Data[3] = 0x41;
	Font_Data[4] = 0x7F;
	Font_Data[5] = 0x00;
}

void Font_Caret(uint8_t *Font_Data)
{
	Font_Data[0] = 0x04;
	Font_Data[1] = 0x02;
	Font_Data[2] = 0x01;
	Font_Data[3] = 0x02;
	Font_Data[4] = 0x04;
	Font_Data[5] = 0x00;
}

void Font_Under_Bar(uint8_t *Font_Data)
{
	Font_Data[0] = 0x40;
	Font_Data[1] = 0x40;
	Font_Data[2] = 0x40;
	Font_Data[3] = 0x40;
	Font_Data[4] = 0x40;
	Font_Data[5] = 0x00;
}

void Font_Back_Quote(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x03;
	Font_Data[2] = 0x07;
	Font_Data[3] = 0x08;
	Font_Data[4] = 0x00;
	Font_Data[5] = 0x00;
}

void Font_Small_A(uint8_t *Font_Data)
{
	Font_Data[0] = 0x20;
	Font_Data[1] = 0x54;
	Font_Data[2] = 0x54;
	Font_Data[3] = 0x78;
	Font_Data[4] = 0x40;
	Font_Data[5] = 0x00;
}

void Font_Small_B(uint8_t *Font_Data)
{
	Font_Data[0] = 0x7F;
	Font_Data[1] = 0x28;
	Font_Data[2] = 0x44;
	Font_Data[3] = 0x44;
	Font_Data[4] = 0x38;
	Font_Data[5] = 0x00;
}

void Font_Small_C(uint8_t *Font_Data)
{
	Font_Data[0] = 0x38;
	Font_Data[1] = 0x44;
	Font_Data[2] = 0x44;
	Font_Data[3] = 0x44;
	Font_Data[4] = 0x28;
	Font_Data[5] = 0x00;
}

void Font_Small_D(uint8_t *Font_Data)
{
	Font_Data[0] = 0x38;
	Font_Data[1] = 0x44;
	Font_Data[2] = 0x44;
	Font_Data[3] = 0x28;
	Font_Data[4] = 0x7F;
	Font_Data[5] = 0x00;
}

void Font_Small_E(uint8_t *Font_Data)
{
	Font_Data[0] = 0x38;
	Font_Data[1] = 0x54;
	Font_Data[2] = 0x54;
	Font_Data[3] = 0x54;
	Font_Data[4] = 0x18;
	Font_Data[5] = 0x00;
}

void Font_Small_F(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x08;
	Font_Data[2] = 0x7E;
	Font_Data[3] = 0x09;
	Font_Data[4] = 0x02;
	Font_Data[5] = 0x00;
}

void Font_Small_G(uint8_t *Font_Data)
{
	Font_Data[0] = 0x18;
	Font_Data[1] = 0xA4;
	Font_Data[2] = 0xA4;
	Font_Data[3] = 0x9C;
	Font_Data[4] = 0x78;
	Font_Data[5] = 0x00;
}

void Font_Small_H(uint8_t *Font_Data)
{
	Font_Data[0] = 0x7F;
	Font_Data[1] = 0x08;
	Font_Data[2] = 0x04;
	Font_Data[3] = 0x04;
	Font_Data[4] = 0x78;
	Font_Data[5] = 0x00;
}

void Font_Small_I(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x44;
	Font_Data[2] = 0x7D;
	Font_Data[3] = 0x40;
	Font_Data[4] = 0x00;
	Font_Data[5] = 0x00;
}

void Font_Small_J(uint8_t *Font_Data)
{
	Font_Data[0] = 0x20;
	Font_Data[1] = 0x40;
	Font_Data[2] = 0x40;
	Font_Data[3] = 0x3D;
	Font_Data[4] = 0x00;
	Font_Data[5] = 0x00;
}

void Font_Small_K(uint8_t *Font_Data)
{
	Font_Data[0] = 0x7F;
	Font_Data[1] = 0x10;
	Font_Data[2] = 0x28;
	Font_Data[3] = 0x44;
	Font_Data[4] = 0x00;
	Font_Data[5] = 0x00;
}

void Font_Small_L(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x41;
	Font_Data[2] = 0x7F;
	Font_Data[3] = 0x40;
	Font_Data[4] = 0x00;
	Font_Data[5] = 0x00;
}

void Font_Small_M(uint8_t *Font_Data)
{
	Font_Data[0] = 0x7C;
	Font_Data[1] = 0x04;
	Font_Data[2] = 0x78;
	Font_Data[3] = 0x04;
	Font_Data[4] = 0x78;
	Font_Data[5] = 0x00;
}

void Font_Small_N(uint8_t *Font_Data)
{
	Font_Data[0] = 0x7C;
	Font_Data[1] = 0x08;
	Font_Data[2] = 0x04;
	Font_Data[3] = 0x04;
	Font_Data[4] = 0x78;
}

void Font_Small_O(uint8_t *Font_Data)
{
	Font_Data[0] = 0x38;
	Font_Data[1] = 0x44;
	Font_Data[2] = 0x44;
	Font_Data[3] = 0x44;
	Font_Data[4] = 0x38;
	Font_Data[5] = 0x00;
}

void Font_Small_P(uint8_t *Font_Data)
{
	Font_Data[0] = 0xFC;
	Font_Data[1] = 0x18;
	Font_Data[2] = 0x24;
	Font_Data[3] = 0x24;
	Font_Data[4] = 0x18;
	Font_Data[5] = 0x00;
}

void Font_Small_Q(uint8_t *Font_Data)
{
	Font_Data[0] = 0x18;
	Font_Data[1] = 0x24;
	Font_Data[2] = 0x24;
	Font_Data[3] = 0x18;
	Font_Data[4] = 0xFC;
	Font_Data[5] = 0x00;
}

void Font_Small_R(uint8_t *Font_Data)
{
	Font_Data[0] = 0x7C;
	Font_Data[1] = 0x08;
	Font_Data[2] = 0x04;
	Font_Data[3] = 0x04;
	Font_Data[4] = 0x08;
	Font_Data[5] = 0x00;
}

void Font_Small_S(uint8_t *Font_Data)
{
	Font_Data[0] = 0x48;
	Font_Data[1] = 0x54;
	Font_Data[2] = 0x54;
	Font_Data[3] = 0x54;
	Font_Data[4] = 0x24;
	Font_Data[5] = 0x00;
}

void Font_Small_T(uint8_t *Font_Data)
{
	Font_Data[0] = 0x04;
	Font_Data[1] = 0x04;
	Font_Data[2] = 0x3F;
	Font_Data[3] = 0x44;
	Font_Data[4] = 0x24;
	Font_Data[5] = 0x00;
}

void Font_Small_U(uint8_t *Font_Data)
{
	Font_Data[0] = 0x3C;
	Font_Data[1] = 0x40;
	Font_Data[2] = 0x40;
	Font_Data[3] = 0x20;
	Font_Data[4] = 0x7C;
	Font_Data[5] = 0x00;
}

void Font_Small_V(uint8_t *Font_Data)
{
	Font_Data[0] = 0x1C;
	Font_Data[1] = 0x20;
	Font_Data[2] = 0x40;
	Font_Data[3] = 0x20;
	Font_Data[4] = 0x1C;
	Font_Data[5] = 0x00;
}

void Font_Small_W(uint8_t *Font_Data)
{
	Font_Data[0] = 0x3C;
	Font_Data[1] = 0x40;
	Font_Data[2] = 0x30;
	Font_Data[3] = 0x40;
	Font_Data[4] = 0x3C;
	Font_Data[5] = 0x00;
}

void Font_Small_X(uint8_t *Font_Data)
{
	Font_Data[0] = 0x44;
	Font_Data[1] = 0x28;
	Font_Data[2] = 0x10;
	Font_Data[3] = 0x28;
	Font_Data[4] = 0x44;
	Font_Data[5] = 0x00;
}

void Font_Small_Y(uint8_t *Font_Data)
{
	Font_Data[0] = 0x4C;
	Font_Data[1] = 0x90;
	Font_Data[2] = 0x90;
	Font_Data[3] = 0x90;
	Font_Data[4] = 0x7C;
	Font_Data[5] = 0x00;
}

void Font_Small_Z(uint8_t *Font_Data)
{
	Font_Data[0] = 0x44;
	Font_Data[1] = 0x64;
	Font_Data[2] = 0x54;
	Font_Data[3] = 0x4C;
	Font_Data[4] = 0x44;
	Font_Data[5] = 0x00;
}

void Font_Left_Curly_Bracket(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x08;
	Font_Data[2] = 0x36;
	Font_Data[3] = 0x41;
	Font_Data[4] = 0x00;
	Font_Data[5] = 0x00;
}

void Font_Pipe(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x00;
	Font_Data[2] = 0x7F;
	Font_Data[3] = 0x00;
	Font_Data[4] = 0x00;
	Font_Data[5] = 0x00;
}

void Font_Right_Curly_Bracket(uint8_t *Font_Data)
{
	Font_Data[0] = 0x00;
	Font_Data[1] = 0x41;
	Font_Data[2] = 0x36;
	Font_Data[3] = 0x08;
	Font_Data[4] = 0x00;
	Font_Data[5] = 0x00;
}

void Font_Tilde(uint8_t *Font_Data)
{
	Font_Data[0] = 0x02;
	Font_Data[1] = 0x01;
	Font_Data[2] = 0x02;
	Font_Data[3] = 0x04;
	Font_Data[4] = 0x02;
	Font_Data[5] = 0x00;
}

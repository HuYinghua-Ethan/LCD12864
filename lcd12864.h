#ifndef __LCD12864_H
#define __LCD12864_H

#include "sys.h"
#include "string.h"

#define WRITE_CMD	0xF8	//写命令  
#define WRITE_DATA	0xFA	//写数据

#define SID PBout(9)
#define SCLK PBout(8)


void Lcd_GPIO_init(void);
void int2str(int n, uint8_t *str);
void Lcd_Init(void);
void LCD_Display_Words(uint8_t x, uint8_t y, uint8_t*str);
void LCD_Display_Picture(uint8_t *img);
void LCD_Clear(void);


#endif

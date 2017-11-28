/*
 * lcd.h
 *
 *  Created on: Nov 11, 2017
 *      Author: lenovo
 */

#ifndef LCD_H_
#define LCD_H_
void lcd_init(void);
void lcd_clear(void);
void lcd_gotoxy(char i,char j);
void lcd_putstr(char *s);
void lcd_putchar(unsigned char kar);
void enable(void);


#endif /* LCD_H_ */

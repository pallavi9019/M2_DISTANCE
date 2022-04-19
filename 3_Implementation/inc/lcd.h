/**
 * @file lcd.h
 * @author Pallavi M 
 * @brief Lcd header file will display the value of distance
 * @version 0.1
 * @date 2022-04-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef LCD_16x2_H_H_					/* Define library H file if not defined */
#define LCD_16x2_H_H_

#define F_CPU 8000000UL					/* Define CPU Frequency e.g. here its 8MHz */
#include <avr/io.h>						/* Include AVR std. library file */
#include <util/delay.h>					/* Include Delay header file */

#define LCD_Data_Dir DDRA					/* Define LCD data port direction */
#define LCD_Command_Dir DDRD			/* Define LCD command port direction register */
#define LCD_Data_Port PORTA				/* Define LCD data port */
#define LCD_Command_Port PORTD			/* Define LCD data port */
#define EN PD5							/* Define Enable signal pin */
#define RW PD4							/* Define Read/Write signal pin */
#define RS PD3							/* Define Register Select (data reg./command reg.) signal pin */
/**
 * @brief Function that contains all the command dedinitions
 * 
 */
void LCD_Command (char);
/**
 * @brief Function that contains all the character dedinitions
 * 
 */
void LCD_Char (char);	
/**
 * @brief Function to initialise the the necessary commands for LCD
 * 
 */
void LCD_Init (void);	
/**
 * @brief Function that contains all the string dedinitions
 * 
 */
void LCD_String (char*);				
/**
 * @brief Send string to LCD function
 * 
 */
void LCD_String_xy (char,char,char*);
/**
 * @brief Function to clear the LCD display
 * 
 */
void LCD_Clear(void);						/* Clear LCD*/


#endif									/* LCD_16x2_H_FILE_H_ */
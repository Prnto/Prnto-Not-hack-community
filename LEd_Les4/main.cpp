/*
 * LEd_Les4.cpp
 *
 * Created: 10.02.2022 11:36:46
 * Author : Oleksii Kolosov
 */ 

#include <avr/io.h>
#include "avr/delay.h"


int main(void)           /* Тип данных Имя функции аргумент*/
{
    /* Replace with your application code */
	
	DDRB = 0b0000111;   /* направление тока*/
    DDRD = 0b11111111;
	DDRC = 0b00000001;
	PORTD = 0b01111111;
	
	                   //PORTB = 0 ( 0 вольт) , = 1 (5 вольт)//
	
                           
    while (1)          /*Тело функции    (1) Условие будут повторяться  в цикле  бесконечно*/
    {
		   //LED//
		PORTB = 0b00000001;
		_delay_ms(500);
		PORTB = 0b00000000;
		_delay_ms(500);
		
		PORTB = 0b00000010;
		_delay_ms(500);
		PORTB = 0b00000000;
		_delay_ms(500);
		
		PORTB = 0b00000100;
		_delay_ms(500);
		PORTB = 0b00000000;
		_delay_ms(500);	
		
		
			       // TIMER//
			       
			       PORTD = 0b01111111;
			       _delay_ms(300);       //9
			       PORTD = 0b00010000;
			       _delay_ms(300);
			       
			       PORTD = 0b01111111;
			       _delay_ms(300);       //8
			       PORTD = 0b00000000;
			       _delay_ms(300);
			       
			       PORTD = 0b01111111;
			       _delay_ms(300);       //7
			       PORTD = 0b01111000;
			       _delay_ms(300);
			       
			       PORTD = 0b01111111;
			       _delay_ms(300);       //6
			       PORTD = 0b00000010;
			       _delay_ms(300);
			       
			       PORTD = 0b01111111;
			       _delay_ms(300);       //5
			       PORTD = 0b00010010;
			       _delay_ms(300);
			       
			       PORTD = 0b01111111;
			       _delay_ms(300);       //4
			       PORTD = 0b00011001;
			       _delay_ms(300);
			       
			       PORTD = 0b01111111;
			       _delay_ms(300);       //3
			       PORTD = 0b00110000;
			       _delay_ms(300);
			       
			       PORTD = 0b01111111;
			       _delay_ms(300);       //2
			       PORTD = 0b00100100;
			       _delay_ms(300);
			       
			       PORTD = 0b01111111;
			       _delay_ms(300);       //1
			       PORTD = 0b01111001;
			       _delay_ms(300);
			       
			       PORTD = 0b01111111;
			       _delay_ms(300);       //0
			       PORTD = 0b01000000;
			       _delay_ms(300);
			       
			       PORTD = 0b11111111;
			       _delay_ms(700);       //LED-BLUE
			       PORTD = 0b01111111;
			       _delay_ms(1000);
    }
}


/*                                   Портовые регистры имеют ширину 8 БИТ!
DDR(DDRB,DDRC,DDRD) = DATA DIRECT REGISTER регистр направления этой строки данных,кот.он будет вводить-выводить.
 
DDR(DDRB,DDRC,DDRD) = 0xFF - все выходы в портах (DDRB|DDRC|DDRD)будут работать как "ВЫХОДЫ"(например 0x01| 0b0000001)
                    = 0x00 - будут работать как "ВХОДЫ"   (например 0x00| 0b0000000)  
	Чтобы настроить вывод порта на вход.в рег нужно записать "0" , а на выход "1"				
	                           Логические операторы
						| (ИЛИ) , & (И), ~ (НЕ), ^ (XOR)
						
PINB =  строка входных данных. И буква "В",которые ассоциируются с DDR или портом или пин-кодом...это так же как имя.					   			 
*/
/*
 * LEd_Les4.cpp
 *
 * Created: 10.02.2022 11:36:46
 * Author : Oleksii Kolosov
 */ 

#include <avr/io.h>
#include "avr/delay.h"


int main(void)           /* ��� ������ ��� ������� ��������*/
{
    /* Replace with your application code */
	
	DDRB = 0b0000111;   /* ����������� ����*/
    DDRD = 0b11111111;
	DDRC = 0b00000001;
	PORTD = 0b01111111;
	
	                   //PORTB = 0 ( 0 �����) , = 1 (5 �����)//
	
                           
    while (1)          /*���� �������    (1) ������� ����� �����������  � �����  ����������*/
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


/*                                   �������� �������� ����� ������ 8 ���!
DDR(DDRB,DDRC,DDRD) = DATA DIRECT REGISTER ������� ����������� ���� ������ ������,���.�� ����� �������-��������.
 
DDR(DDRB,DDRC,DDRD) = 0xFF - ��� ������ � ������ (DDRB|DDRC|DDRD)����� �������� ��� "������"(�������� 0x01| 0b0000001)
                    = 0x00 - ����� �������� ��� "�����"   (�������� 0x00| 0b0000000)  
	����� ��������� ����� ����� �� ����.� ��� ����� �������� "0" , � �� ����� "1"				
	                           ���������� ���������
						| (���) , & (�), ~ (��), ^ (XOR)
						
PINB =  ������ ������� ������. � ����� "�",������� ������������� � DDR ��� ������ ��� ���-�����...��� ��� �� ��� ���.					   			 
*/
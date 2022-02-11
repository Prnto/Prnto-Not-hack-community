/*
 * LEd_Les4.cpp
 *
 * Created: 10.02.2022 11:36:46
 * Author : Oleksii Kolosov
 */ 

#include <avr/io.h>
#include "avr/delay.h"


int main(void)    /* ��� ������ ��� ������� ��������*/
{
    /* Replace with your application code */
	
	DDRB = 0xFF; /* ����������� ����*/
   
	//PORTB = 0 ( 0 �����) , = 1 (5 �����)//
	
                           
    while (1) /*���� �������          (1) ������� ����� �����������  � �����  ����������*/
    {
		PORTB = 0x01;
		_delay_ms(500);
		PORTB = 0x00;
		_delay_ms(500);
		
	
		
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
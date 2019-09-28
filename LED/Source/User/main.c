#include<stdio.h>
#include<stdlib.h>
#include "LED.h"
#include "stm32f10x.h"

void Delay_Ms(uint16_t time)  //ÑÓÊ±º¯Êý
{ 
	uint16_t i,j;
	for(i=0;i<time;i++)
  		for(j=0;j<10260;j++);
}

int main(void)
{
	SystemInit();
	Init_LED();
	
	while(1)
	{
		LEDUP1;
		Delay_Ms(500);
		
		LEDDOWN1;
		Delay_Ms(500);
		
		LEDUP2;
		Delay_Ms(500);
		
		LEDDOWN2;
		Delay_Ms(500);
		
		LEDUP1;
		LEDUP2;
		Delay_Ms(500);
		
		LEDDOWN1;
		LEDDOWN2;
		Delay_Ms(500);
  }
}


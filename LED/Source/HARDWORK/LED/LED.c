#include<stdio.h>
#include<stdlib.h>
#include "LED.h"
#include "stm32f10x.h"

void Init_LED(void)
{
  GPIO_InitTypeDef GPIO_InitStructure;																				//定义一个GPIO结构体变量
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD|RCC_APB2Periph_GPIOG ,ENABLE);	//使能各个端口时钟，重要！！！
	
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_13;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOD, &GPIO_InitStructure);																			//根据参数初始化GPIOD寄存器
	
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_14;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOG, &GPIO_InitStructure);																			//根据参数初始化GPIOG寄存器
}


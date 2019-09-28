#include<stdio.h>
#include<stdlib.h>
#include "LED.h"
#include "stm32f10x.h"

void Init_LED(void)
{
  GPIO_InitTypeDef GPIO_InitStructure;																				//����һ��GPIO�ṹ�����
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD|RCC_APB2Periph_GPIOG ,ENABLE);	//ʹ�ܸ����˿�ʱ�ӣ���Ҫ������
	
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_13;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOD, &GPIO_InitStructure);																			//���ݲ�����ʼ��GPIOD�Ĵ���
	
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_14;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOG, &GPIO_InitStructure);																			//���ݲ�����ʼ��GPIOG�Ĵ���
}


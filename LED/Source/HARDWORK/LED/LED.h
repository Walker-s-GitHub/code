#ifndef Init_IO
#define Init_IO	

#define LEDUP1  GPIO_SetBits(GPIOD, GPIO_Pin_13);//����LED1
#define LEDUP2  GPIO_SetBits(GPIOG, GPIO_Pin_14);//����LED2
#define LEDDOWN1  GPIO_ResetBits(GPIOD, GPIO_Pin_13);//Ϩ��LED1
#define LEDDOWN2  GPIO_ResetBits(GPIOG, GPIO_Pin_14);//Ϩ��LED2

void Init_LED(void);

#endif


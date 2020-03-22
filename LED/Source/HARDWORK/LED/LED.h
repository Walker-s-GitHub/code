#ifndef LED_H
#define LED_H

#define LEDUP1      GPIO_SetBits(GPIOD, GPIO_Pin_13);
#define LEDUP2      GPIO_SetBits(GPIOG, GPIO_Pin_14);
#define LEDDOWN1    GPIO_ResetBits(GPIOD, GPIO_Pin_13);
#define LEDDOWN2    GPIO_ResetBits(GPIOG, GPIO_Pin_14);

void Init_LED(void);

#endif


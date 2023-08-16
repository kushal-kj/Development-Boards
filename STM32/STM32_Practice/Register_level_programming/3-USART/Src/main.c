
#include <stdint.h>
#include <stdio.h>
#include "stm32f401xe.h"
//#include "stm32f4xx.h"
#include "stm32f4xx_ll_gpio.h"

int main(void)
{




	RCC->AHB1ENR|=RCC_AHB1ENR_GPIOAEN;	//Enabling clock to GPIOA(AHB1 bus)

	LL_GPIO_InitTypeDef GPIO_InitStruct;	//GPIO handle

//	GPIO_InitStruct.MODER &=~(GPIO_MODER_MODE0_1);
//	GPIO_InitStruct.MODER |=GPIO_MODER_MODE0_1;		//PORT 0
//
//	GPIO_InitStruct.OTYPER &=~(GPIO_OTYPER_OT0);		//push-pull (0u<<0)
//
//	GPIO_InitStruct.OSPEEDR&=~(GPIO_OSPEEDER_OSPEEDR0);
//	GPIO_InitStruct.OSPEEDR|=GPIO_OSPEEDER_OSPEEDR0_1;	//50mhz	(2u<<0)
//
//	GPIO_InitStruct.PUPDR &=~(GPIO_PUPDR_PUPD0);	//No PUPD	(0U<<0)
//
//
//
//









	while(1)
	{

	}

}

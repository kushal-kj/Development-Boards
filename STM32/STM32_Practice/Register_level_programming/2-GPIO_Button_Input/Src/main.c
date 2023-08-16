
#include <stdint.h>
#include "stm32f401xe.h"

//include library


int main(void)
{
	//RCC register - enabling GPIO port C pins 6 and 8
	RCC->AHB1ENR |=RCC_AHB1ENR_GPIOCEN;



	//setup control registers for LED output
	//MOde register for output

	GPIOC->MODER &=~(GPIO_MODER_MODE6_1);
	GPIOC->MODER |=GPIO_MODER_MODE6_0;

	//Output Type register
	GPIOC->OTYPER &=~(GPIO_OTYPER_OT6);

	//Speed Register
	GPIOC->OSPEEDR &=~(GPIO_OSPEEDR_OSPEED6);
	GPIOC->OSPEEDR |=GPIO_OSPEEDR_OSPEED6;

	//Pull up pull down register
	GPIOC->PUPDR &=~(GPIO_PUPDR_PUPDR6);

	//setup control registers for push button input
	//mode register for input
	GPIOC->MODER &=~(GPIO_MODER_MODER8);

	//Pull up pull down register
	GPIOC->PUPDR &=~(GPIO_PUPDR_PUPDR8);

    /* Loop forever */

	while(1)
	{

		if(GPIOC->IDR & GPIO_IDR_IDR_8)	//If the button is pressed (IDR-input data register)
		{

			GPIOC->BSRR |=GPIO_BSRR_BS_6;	//turn ON LED (BSRR)
		}

		else	//If the button is not pressed
		{
			GPIOC->BSRR |=GPIO_BSRR_BR_6;//turn OFF the LED  (BRR)
		}




	}
	for(;;);
}

#include "stm32f4xx.h"                  // Device header


//PIN A0 HIGH YAP UYANIR.
//clock/(1+psc)*(1+arr); ==>Ayni zamanda pwm freq

void uykuMod(void);


void TIM4_IRQHandler(void)
{
   //tim4->sr &uif ==> zaten bir tek bundan gelebilir.
    //tick++;
	//tim4->sr &=uif;
	

}
void uykuMod()
{

	 RCC->APB1ENR |= RCC_APB1ENR_PWREN;
		SCB->SCR  |=SCB_SCR_SLEEPDEEP_Msk;
		PWR->CR  |=PWR_CR_PDDS;
		PWR->CR |= PWR_CR_CWUF;
		PWR->CSR |= PWR_CSR_EWUP;
		__WFI();

}
void delayMs(int ms)
{
  //tim4->cr1 en
	// ticks=0;
	//while(ticks<(ms*1000));
	//tim4->cr1 disable.

}

int main()
	
{
	
	//Standby modunda butun her sey gider.
	
	if(((PWR->CSR)&(PWR_CSR_SBF)))  //Standby Modunda mi?
	{
	  PWR->CR |= PWR_CR_CWUF; //Wake -Up Bayragini temizle.
		PWR->CR |= PWR_CR_CSBF; //Standby bayragini temizle.
	
	
	}
	
	
	
	
	/////// PWM MODE //////
	
	//Tim 4 clock hatti enable. tim4 channnel4
	//a9 yapmis? 
	//tim4 ccer ==>cc4e
	//tim4 cr1 arpe
	//tim4 ccmr2 oc4m1 oc4m2 oc4pe
	
	//psc degeri
	//arr degeri
	//ccr4 degeri
	 //tim4 egr ug
	//cen
	
	
	/////// PWM MODE //////
	
	
	
	//// SYSTICK MODE //////
	/*
	
	//psc degeri
	//arr degeri
	//Tim4 cr1  urs
	//tim4 dier uie
	 //tim4 egr ug
	//nvic tim enable.
	 
	*/
	
	//// SYSTICK MODE //////

while(1)    //Uyuyor.Reset pinine basilmadikca ya da A0 high olmadigi surece bir sey yapmaz.	
{
	//uykuMod();
	
	/*
	//DMA UART
	
	DMA EN YAP.
	WHILE DMA ISR TCIF BAYRAK 
	DMA IFCR CTCIF
	DMA DIS YAP. //Sürekli okumasini istemiyorsak.
	
	
	
	*/


}




}



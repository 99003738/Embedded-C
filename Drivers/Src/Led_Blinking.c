


#include "API_header.h"



int ledStart(void)
{



	uint16_t val=0;
	PinModePuPd(GPIOD, 14, OUTPUT, PullDown);

	pinMode(GPIOA,GPIO_Pin_Numb_0,INPUT);
	 digitalWritePin(GPIOD,14,LOW);


      while (1)
      {
    	  val = digitalReadPin(GPIOA, 0);

    	  if (val)
    	  {
    		 digitalWritePin(GPIOD,14,HIGH);
    		 delay(40000);
    		 digitalWritePin(GPIOD,14,LOW);
    		 delay(40000);
    	  }



     }



}

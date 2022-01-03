



#include "st7735.h"
#include 	"stdlib.h"
#include "stm32f4xx.h"
uint16_t delay=1;
uint16_t renk;
uint16_t sayi=0;
uint16_t boyut=10;

void renkayari(){
	
	
	if(renk==ST7735_BLACK){
		renk=ST7735_RED;
	HAL_Delay(5);	
	}
	else if(renk==ST7735_RED){

renk=ST7735_BLUE;
		HAL_Delay(5);
	}	
else if(renk==ST7735_BLUE){
	renk=ST7735_YELLOW;
	HAL_Delay(5);
	
}
else{
renk=ST7735_BLACK;
}		
}


void blokla(uint8_t x,uint8_t y,uint8_t son){
	
	
	renkayari();
	
	while(sayi<=son){
		
			
	ST7735_FillRectangle(x,y+sayi,boyut,boyut,renk);
			
		
	ST7735_FillRectangle(x,y+sayi-boyut,boyut,boyut,ST7735_CYAN);
	sayi+=1;
		
		
	HAL_Delay(delay);
	}
	
	sayi=0;	
}


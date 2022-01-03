
#include "fonksiyonlar.h"
#include "stm32f1xx_hal.h"
#include "st7735.h"
uint8_t x=0,y=19;
#define arkaplan ST7735_MAGENTA
#define blokrengi ST7735_BLUE
void kare(uint8_t dizi[11][21]){
	x=4;
	for(int i=0;i<11;i++){
		dizi[i][19] = 1;
	}
	for(int y=-1;y<20;y++){
		int a = butonbul(); //dügme oku
		if(a==1){ //dügme sag
			if(!(dizi[x+2][y]==1)){ //sagdaki blok dolu ise gitme
			if(x>8){
				x=8;

			}
			HAL_Delay(10);
			x=x+1;
			ST7735_FillRectangle(((x-1)*8)+1,((y)*8),7,15,arkaplan);
			y=y-1;
		}
	}
		

		if(a==2){ //dügme sol

			 if(!(dizi[x-1][y]==1)){	//soldaki blok dolu ise gitme
			if(x<1){
				x=1;

			}
 		HAL_Delay(10);
		x=x-1;
		ST7735_FillRectangle(((x+1)*8)+1,((y)*8),15,15,arkaplan);
			y=y-1;
		}
		 }

		if(!(dizi[x][y+1] ==1) && !(dizi[x+1][y+1] ==1)){
		HAL_Delay(50);


		ST7735_FillRectangle((x*8)+1,((y+1)*8),7,7,blokrengi);
		ST7735_FillRectangle(((x+1)*8)+1,((y+1)*8),7,7,blokrengi);
		ST7735_FillRectangle((x*8)+1,((y+2)*8),7,7,blokrengi);
		ST7735_FillRectangle(((x+1)*8)+1,((y+2)*8),7,7,blokrengi);
		ST7735_FillRectangle((x*8)+1,((y)*8),7,7,arkaplan);
	  ST7735_FillRectangle(((x+1)*8)+1,((y)*8),7,7,arkaplan);
		ST7735_FillRectangle((x*8)+1,((y-1)*8),7,7,arkaplan);
		ST7735_FillRectangle(((x+1)*8)+1,((y-1)*8),7,7,arkaplan);
			//}

		}
		else{
		dizi[x][y-1]=1;
		dizi[x+1][y-1]=1;
		dizi[x][y]=1;
		dizi[x+1][y]=1;
		break;
		}
		uint8_t m=18;
		uint8_t sayac=0;
		uint8_t s=0;

		for(int m=18;m>0;m--){
		for(int i=0;i<11;i++){

			if(dizi[i][m]!=0){

			sayac+=1;

			if(sayac>=11){
				sayac=0;
				for(int n=m;n>=0;n--){
				ST7735_FillRectangle(0,((n+1)*8),89,7,arkaplan); //satir sil


				for(int i=0;i<11;i++){ //her bir x i bir asagi kaydir

				 dizi[i][n]=dizi[i][n-1];
			 dizi[i][n-1]=0;
				 	ST7735_FillRectangle(0,((n)*8),89,7,arkaplan);

				if(dizi[i][n]==1){ //kaydirilan x leri ciz
					ST7735_FillRectangle((i*8)+1,((n+1)*8),7,7,blokrengi);
					}
				}
			}
		}
	}
}
		sayac=0;
}
		for(int x=0;x<11;x++){
		if(dizi[x][0] == 1){
		//	ST7735_DrawString(10, 120,"Oyun Bitti", Font_7x10,ST7735_BLACK,ST7735_WHITE);
		 break;
		}
		}
		}
}

void cubuk(uint8_t dizi[11][21]){
	
		
	x=4;
	for(int i=0;i<11;i++){
		dizi[i][19] = 1;
	}

	for(int y=-1;y<20;y++){
		int a = butonbul(); //dügme oku
		if(a==1){ //dügme sag
		
			if(!(dizi[x+4][y]==1)){ //sagdaki blok dolu ise gitme
			if(x>6){
				x=6;

			}
			HAL_Delay(10);
			x=x+1;
			ST7735_FillRectangle(((x-1)*8)+1,((y)*8),8,7,arkaplan);
			y=y-1;
			
		}
	}

		if(a==2){ //dügme sol

			 if(!(dizi[x-1][y]==1)){	//soldaki blok dolu ise gitme
			if(x<1){
				x=1;

			}
 		HAL_Delay(10);
		x=x-1;
		ST7735_FillRectangle(((x+4)*8),((y)*8),8,7,arkaplan);
		}
			 y=y-1;
		 }

		
		if(!(dizi[x][y] ==1) && !(dizi[x+1][y] ==1) && !(dizi[x+2][y] ==1) && !(dizi[x+3][y] ==1)){
		HAL_Delay(50);



		ST7735_FillRectangle((x*8)+1,((y+1)*8),7,7,blokrengi);
		ST7735_FillRectangle(((x+1)*8)+1,((y+1)*8),7,7,blokrengi);
		ST7735_FillRectangle(((x+2)*8)+1,((y+1)*8),7,7,blokrengi);
		ST7735_FillRectangle(((x+3)*8)+1,((y+1)*8),7,7,blokrengi);
		ST7735_FillRectangle((x*8)+1,((y)*8),31,7,arkaplan);

			
			

		}
		else{
		dizi[x][y-1]=1;
		dizi[x+1][y-1]=1;
		dizi[x+2][y-1]=1;
		dizi[x+3][y-1]=1;	
		break;
		}
		uint8_t m=18;
		uint8_t sayac=0;

		for(int m=18;m>0;m--){
		for(int i=0;i<11;i++){

			if(dizi[i][m]!=0){

			sayac+=1;

			if(sayac==11){
				sayac=0;
				for(int n=m;n>=0;n--){
				ST7735_FillRectangle(0,((n+1)*8),89,7,arkaplan); //satir sil


				for(int i=0;i<11;i++){ //her bir x i bir asagi kaydir

				 dizi[i][n]=dizi[i][n-1];
			 dizi[i][n-1]=0;
				 	ST7735_FillRectangle(0,((n)*8),89,7,arkaplan);

				if(dizi[i][n]==1){ //kaydirilan x leri ciz
					ST7735_FillRectangle((i*8)+1,((n+1)*8),7,7,blokrengi);
					}
				}
			}
		}
	}
}
		sayac=0;
}
		for(int x=0;x<11;x++){
		if(dizi[x][0] == 1){
		//	ST7735_DrawString(10, 120,"Oyun Bitti", Font_7x10,ST7735_BLACK,ST7735_WHITE);
		 break;
		}
		}
		}
}

void cubukdik(uint8_t dizi[11][21]){
	
		
	x=4;
	for(int i=0;i<11;i++){
		dizi[i][19] = 1;
	}

	for(int y=-1;y<20;y++){
		int a = butonbul(); //dügme oku
		if(a==1){ //dügme sag
		
			if(!(dizi[x+4][y]==1)){ //sagdaki blok dolu ise gitme
			if(x>9){
				x=9;

			}
			HAL_Delay(10);
			x=x+1;
			ST7735_FillRectangle(((x-1)*8)+1,((y)*8),8,31,arkaplan);
			y=y-1;
			
		}
	}

		if(a==2){ //dügme sol

			 if(!(dizi[x-1][y]==1)){	//soldaki blok dolu ise gitme
			if(x<1){
				x=1;

			}
 		HAL_Delay(10);
		x=x-1;
		ST7735_FillRectangle(((x+1)*8),((y)*8),8,31,arkaplan);
		}
			 y=y-1;
		 }

		
		if(!(dizi[x][y+3] ==1)){
		HAL_Delay(50);



		ST7735_FillRectangle((x*8)+1,((y+1)*8),7,7,blokrengi);
		ST7735_FillRectangle(((x)*8)+1,((y+2)*8),7,7,blokrengi);
		ST7735_FillRectangle(((x)*8)+1,((y+3)*8),7,7,blokrengi);
		ST7735_FillRectangle(((x)*8)+1,((y+4)*8),7,7,blokrengi);
		ST7735_FillRectangle((x*8)+1,((y)*8),7,7,arkaplan);

			
			

		}
		else{
		dizi[x][y-1]=1;
		dizi[x][y]=1;
		dizi[x][y+1]=1;
		dizi[x][y+2]=1;	
		break;
		}
		uint8_t m=18;
		uint8_t sayac=0;

		for(int m=18;m>0;m--){
		for(int i=0;i<11;i++){

			if(dizi[i][m]!=0){

			sayac+=1;

			if(sayac==11){
				sayac=0;
				for(int n=m;n>=0;n--){
				ST7735_FillRectangle(0,((n+1)*8),89,7,arkaplan); //satir sil


				for(int i=0;i<11;i++){ //her bir x i bir asagi kaydir

				 dizi[i][n]=dizi[i][n-1];
			 dizi[i][n-1]=0;
				 	ST7735_FillRectangle(0,((n)*8),89,7,arkaplan);

				if(dizi[i][n]==1){ //kaydirilan x leri ciz
					ST7735_FillRectangle((i*8)+1,((n+1)*8),7,7,blokrengi);
					}
				}
			}
		}
	}
}
		sayac=0;
}
		for(int x=0;x<11;x++){
		if(dizi[x][0] == 1){
		//	ST7735_DrawString(10, 120,"Oyun Bitti", Font_7x10,ST7735_BLACK,ST7735_WHITE);
		 break;
		}
		}
		}
}

uint8_t butonbul(){
	uint8_t		a=HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0);
	uint8_t	b=HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_1);
	
	if(a==1){
			while(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0));
			HAL_Delay(10);

			return 1;
		}else if(b==1){
			while(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_1));
			HAL_Delay(10);
		return 2;
		}
		
		else{
	return 0;
		}
}

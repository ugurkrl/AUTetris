/*
 * Oyun Fonksiyonlari
 *
 *  Created on: 21/11/2021
 *  Author: AHMET TAHA AKDAG VE UGUR KIRÇIL
 */

#ifndef FONKSIYONLAR_H_
#define FONKSIYONLAR_H_
#include "stdint.h"

#ifdef __cplusplus


extern "C"
#endif

void blokla(uint8_t x,uint8_t y,uint8_t son);
uint16_t  rekdon(uint16_t islem);
uint8_t butonbul();
void  kare(uint8_t dizi[11][20]);


#endif

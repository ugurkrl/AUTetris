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

uint8_t butonbul();
uint16_t kare(uint8_t dizi[11][21],uint16_t skor,uint8_t delay);
uint16_t cubuk(uint8_t dizi[11][21],uint16_t skor,uint8_t delay);
uint16_t cubukdik(uint8_t dizi[11][21],uint16_t skor,uint8_t delay);
uint8_t baslangicekrani();

#endif

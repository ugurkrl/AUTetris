/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define SOL_Pin GPIO_PIN_0
#define SOL_GPIO_Port GPIOA
#define SAG_Pin GPIO_PIN_1
#define SAG_GPIO_Port GPIOA
#define YUKARI_Pin GPIO_PIN_2
#define YUKARI_GPIO_Port GPIOA
#define ASAGI_Pin GPIO_PIN_3
#define ASAGI_GPIO_Port GPIOA
#define SCL_Pin GPIO_PIN_5
#define SCL_GPIO_Port GPIOA
#define A_Pin GPIO_PIN_6
#define A_GPIO_Port GPIOA
#define SDA_Pin GPIO_PIN_7
#define SDA_GPIO_Port GPIOA
#define RES_Pin GPIO_PIN_1
#define RES_GPIO_Port GPIOB
#define DC_Pin GPIO_PIN_10
#define DC_GPIO_Port GPIOB
#define CS_Pin GPIO_PIN_11
#define CS_GPIO_Port GPIOB
#define LED1_G_Pin GPIO_PIN_11
#define LED1_G_GPIO_Port GPIOA
#define LED1_R_Pin GPIO_PIN_12
#define LED1_R_GPIO_Port GPIOA
#define LED1_B_Pin GPIO_PIN_15
#define LED1_B_GPIO_Port GPIOA
#define LED3_Pin GPIO_PIN_3
#define LED3_GPIO_Port GPIOB
#define LED2_B_Pin GPIO_PIN_4
#define LED2_B_GPIO_Port GPIOB
#define LED2_G_Pin GPIO_PIN_5
#define LED2_G_GPIO_Port GPIOB
#define LED2_R_Pin GPIO_PIN_6
#define LED2_R_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

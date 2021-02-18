/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "usart.h"
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
#define K1_CHECK_DOWN (unsigned char)(0x01)
#define K1_CHECK_UP   (unsigned char)(0x11)
#define K2_CHECK_DOWN (unsigned char)(0X02)
#define K2_CHECK_UP   (unsigned char)(0x12)
#define K3_CHECK_DOWN (unsigned char)(0X03)
#define K3_CHECK_UP   (unsigned char)(0x13)
#define K4_CHECK_DOWN (unsigned char)(0X04)
#define K4_CHECK_UP   (unsigned char)(0x14)
#define K1_DOWN_HANDLE (unsigned char)(0x05)
#define K2_DOWN_HANDLE (unsigned char)(0x06)
#define K3_DOWN_HANDLE (unsigned char)(0x07)
#define K4_DOWN_HANDLE (unsigned char)(0x08)
#define WIFI_K1_DOWN (unsigned char)(0x31)
#define WIFI_K2_DOWN (unsigned char)(0x33)
#define WIFI_K3_DOWN (unsigned char)(0x35)
#define WIFI_K4_DOWN (unsigned char)(0x37)
#define CHECK_KEY (unsigned char)(0x00)
#define CHECK_KEY_HANDLE (unsigned char)(0x09)
#define K_LOCKED (unsigned char)(0X21)
#define K_UNLOCKED (unsigned char)(0X00)
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
#define dry_ctl_Pin GPIO_PIN_13
#define dry_ctl_GPIO_Port GPIOC
#define fan1_ctl_Pin GPIO_PIN_14
#define fan1_ctl_GPIO_Port GPIOC
#define fan2_ctl_Pin GPIO_PIN_15
#define fan2_ctl_GPIO_Port GPIOC
#define door_Pin GPIO_PIN_0
#define door_GPIO_Port GPIOF
#define k1_Pin GPIO_PIN_3
#define k1_GPIO_Port GPIOA
#define k2_Pin GPIO_PIN_4
#define k2_GPIO_Port GPIOA
#define k3_Pin GPIO_PIN_5
#define k3_GPIO_Port GPIOA
#define k4_Pin GPIO_PIN_6
#define k4_GPIO_Port GPIOA
#define bz_Pin GPIO_PIN_8
#define bz_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
extern unsigned char pstat1;
extern unsigned char pstat2;
extern unsigned char pstat3;
extern unsigned char pstat4;
extern unsigned char mutex; //互斥
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

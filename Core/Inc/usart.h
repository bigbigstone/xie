/**
  ******************************************************************************
  * File Name          : USART.h
  * Description        : This file provides code for the configuration
  *                      of the USART instances.
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
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __usart_H
#define __usart_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/

#include "main.h"
/* USER CODE BEGIN Includes */
#include "string.h"
#define BUF_LEN 100
#define DMA_RXED      1
#define DMA_RXING     0
#define DMA_TXED      1
#define DMA_TXING     0

/* USER CODE END Includes */

extern UART_HandleTypeDef huart1;

/* USER CODE BEGIN Private defines */
typedef struct usart
{
  uint8_t rx_length;
  unsigned char rx_BUFFER[BUF_LEN];
  uint8_t rx_flag; //接收标志�???? 
  uint8_t tx_flag; //发�?�标志位

}UsartType;


extern UsartType u1_ins;
void UsartReceive_Idle(UART_HandleTypeDef* huart);

/* USER CODE END Private defines */

void MX_USART1_UART_Init(void);

/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ usart_H */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

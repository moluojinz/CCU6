//
// Created by ShiF on 2023/8/4.
//

#ifndef CCU6_OPENMV_H
#define CCU6_OPENMV_H
#include "tim.h"
#include "A_headfile.h"
void mv_Init(void);
void mv_getdata(UART_HandleTypeDef *huart);
void MV_UartIrqHandler(UART_HandleTypeDef* huart);
#endif //CCU6_OPENMV_H

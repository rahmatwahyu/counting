/*
 * uart.h
 *
 *  Created on: Nov 11, 2017
 *      Author: lenovo
 */

#ifndef UART_H_
#define UART_H_
#include <stdint.h>
void MX_USART1_UART_Init(void);
void print_UART1(uint8_t string[], uint8_t length);

#endif /* UART_H_ */

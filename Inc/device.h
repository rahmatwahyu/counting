/*
 * device.h
 *
 *  Created on: Nov 8, 2017
 *      Author: lenovo
 */

#ifndef DEVICE_H_
#define DEVICE_H_
#define D7_Pin GPIO_PIN_9
#define D7_GPIO_Port GPIOB
#define D6_Pin GPIO_PIN_8
#define D6_GPIO_Port GPIOB
#define D5_Pin GPIO_PIN_7
#define D5_GPIO_Port GPIOB
#define D4_Pin GPIO_PIN_6
#define D4_GPIO_Port GPIOB
#define RS_Pin GPIO_PIN_3
#define RS_GPIO_Port GPIOB
#define RW_Pin GPIO_PIN_4
#define RW_GPIO_Port GPIOB
#define EN_Pin GPIO_PIN_5
#define EN_GPIO_Port GPIOB
#define Sensor3_Pin GPIO_PIN_0
#define Sensor3_GPIO_Port GPIOA
#define Sensor2_Pin GPIO_PIN_14
#define Sensor2_GPIO_Port GPIOC
#define Sensor1_Pin GPIO_PIN_15
#define Sensor1_GPIO_Port GPIOC
#define Buzzer_Pin GPIO_PIN_13
#define Buzzer_GPIO_Port GPIOB
#define Start_Pin GPIO_PIN_11
#define Start_GPIO_Port GPIOA
#define Reset_Pin GPIO_PIN_12//12
#define Reset_GPIO_Port GPIOB//B
/*#define SETBIT(GPIOB,bit)  (GPIOB |= (1<<bit))
#define CLRBIT(GPIOB,bit)  (GPIOB &= (0<<bit))
#define SET_EN SETBIT(GPIOB,EN_Pin)
#define CLR_EN CLRBIT(GPIOB,EN_Pin)
#define SET_RS SETBIT(GPIOB,RS_Pin)
#define CLR_RS CLRBIT(GPIOB,RS_Pin)
#define SET_RW SETBIT(GPIOB,RW_Pin)
#define CLR_RW CLRBIT(GPIOB,RW_Pin)*/
#endif /* DEVICE_H_ */

/*
 * sensor.h
 *
 *  Created on: Nov 11, 2017
 *      Author: lenovo
 */

#ifndef SENSOR_H_
#define SENSOR_H_
#include "stdint.h"
#include "main.h"
uint8_t sensorStartStopDetected(void);
uint8_t sensorResetDetected(void);
uint8_t sensor1Detected(void);
uint8_t sensor2Detected(void);
uint8_t sensor3Detected(void);
void tikupdate(void);



#endif /* SENSOR_H_ */

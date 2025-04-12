/*
 * ds18s20.h
 *
 *  Created on: Mar 29, 2025
 *      Author: renox
 */

#ifndef INC_DS18S20_H_
#define INC_DS18S20_H_

void Set_Pin_Output (GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);

void Set_Pin_Input (GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);

uint8_t DS18B20_Start (void);

void DS18B20_Write (uint8_t data);

uint8_t DS18B20_Read (void);

void Display_Temp (float Temp);

#endif

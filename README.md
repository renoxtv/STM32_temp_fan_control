# STM32_temp_fan_control
University project with STM32F103C8T6 to control fan PWM duty cycle based on DS18S20 temp sensor readings. 

This circuit uses a STM32F103C8T6 MCU, DS18S20 One Wire temp sensor, 16x2 LCD connected in 4-bit parallel mode and an ARCTIC P12 PWM fan.
Sensor reads temp, displays it on the LCD. There is a predefined Temp-To-PWM curve in the file pwm_values.c which adjusts PWM duty cycle, therefore fan speed, based on the temperature readings. The fan is externally powered via 12V source.
Apart from the full code, I have also attached Altium schematic and PCB document ready for fabrication.

# Code for 6sens Omnitilt Project : test of STM32 RTC

## Overview
This code allows us to use internal RTC of the STM32WLExx as system/sample clock. The driver uses the LSI as clock source, an internal low power RC oscillator with typical frequency of 32768Hz. The milliseconds are calculated according to the datasheet.

## Building and Running
The following commands clean build folder, build and flash the sample:

**Command to use**

west build -t pristine

west build -p always -b stm32wl_dw1000_iot_board applications/stm32wle5_rtos_adc

west flash --runner stm32cubeprogrammer
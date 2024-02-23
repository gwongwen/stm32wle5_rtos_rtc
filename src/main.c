/*
 * Copyright (c) 2023
 * Regis Rousseau
 * Univ Lyon, INSA Lyon, Inria, CITI, EA3720
 * SPDX-License-Identifier: Apache-2.0
 */
 

#include <zephyr/device.h>
#include <zephyr/kernel.h>
#include "app_rtc.h"
#include "drv_rtc.h"

int8_t main(void)
{
	struct device *cal_dev = NULL;

    // setup RTC device
    app_stm32_rtc_init(cal_dev);

    // running RTC handler
    app_stm32_get_rtc(cal_dev);
    
    return 0;
}
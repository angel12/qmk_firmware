/*
Copyright 2021 Sadek Baroudi <sadekbaroudi@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define DEVICE_VER      0x0002

/* encoder config */
#define ENCODERS_PAD_A {F0, C7}
#define ENCODERS_PAD_B {F1, F1}
#define ENCODER_RESOLUTION 2

// cirque trackpad config
#define CIRQUE_PINNACLE_ADDR 0x2A
// If using fingerpunch case
// #define POINTING_DEVICE_ROTATION_270
// If using chewiedies case
#define POINTING_DEVICE_ROTATION_90
#define POINTING_DEVICE_TASK_THROTTLE_MS 5

// BEGIN PWM driver: uncomment if using STeMcell as it's a better led driver
// #define WS2812_PWM_DRIVER PWMD2  // default: PWMD2
// #define WS2812_PWM_CHANNEL 2  // default: 2
// #define WS2812_PWM_PAL_MODE 2  // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 2
// #define WS2812_DMA_STREAM STM32_DMA1_STREAM2  // DMA Stream for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
// #define WS2812_DMA_CHANNEL 2  // DMA Channel for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
// #define WS2812_DMAMUX_ID STM32_DMAMUX1_TIM2_UP // DMAMUX configuration for TIMx_UP -- only required if your MCU has a DMAMUX peripheral, see the respective reference manual for the appropriate values for your MCU.
// END PWM driver: uncomment if using STeMcell as it's a better led driver

#define I2C1_CLOCK_SPEED  400000
#define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_2

// #define CIRQUE_PINNACLE_TAPPING_TERM 150
// #define CIRQUE_PINNACLE_TOUCH_DEBOUNCE 100
// #define CIRQUE_PINNACLE_X_LOWER 200
// #define CIRQUE_PINNACLE_X_UPPER 1919
// #define CIRQUE_PINNACLE_Y_LOWER 200
// #define CIRQUE_PINNACLE_Y_UPPER 1471

// Known issue with the cirque and AVR, jumpy mouse movements...
// message from sillyworld 01/31/2022 stating that these improved usability for AVR based MCUs on the cirque
// https://discord.com/channels/440868230475677696/867530303261114398/937731130440970260
//#define F_SCL 100000UL
//#define POINTING_DEVICE_TASK_THROTTLE_MS 5

// Sadek note: tried the above for the cirque fix, and no dice
/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     AT32F435G

#define BOARD_NAME        SHIROFPV435
#define MANUFACTURER_ID   SFPVF435

#define USE_ACC
#define USE_GYRO
#define USE_BARO
#define USE_FLASH

#define USE_ACC_SPI_ICM20602
#define USE_GYRO_SPI_ICM20602
#define USE_BARO_BMP280
#define USE_FLASH_M25P16
#define USE_MAX7456

#define BEEPER_PIN           PC13
#define LED0_PIN             PA14
#define LED1_PIN             PA13

#define MOTOR1_PIN           PB3
#define MOTOR2_PIN           PB4
#define MOTOR3_PIN           PB6
#define MOTOR4_PIN           PB7

#define GYRO_1_SPI_INSTANCE  SPI2
#define GYRO_1_EXTI_PIN      PC9
#define GYRO_1_CS_PIN        PB12
#define GYRO_1_ALIGN         CW180_DEG

#define SPI2_SCK_PIN         PB13
#define SPI2_SDI_PIN         PB14
#define SPI2_SDO_PIN         PB15

#define FLASH_SPI_INSTANCE   SPI1
#define FLASH_CS_PIN         PA4

#define SPI1_SCK_PIN         PA5
#define SPI1_SDI_PIN         PA6
#define SPI1_SDO_PIN         PA7

#define MAX7456_SPI_INSTANCE SPI3
#define MAX7456_SPI_CS_PIN   PA15
#define SPI3_SCK_PIN         PC10
#define SPI3_SDI_PIN         PC11
#define SPI3_SDO_PIN         PB5

#define ADC_VBAT_PIN         PC2
#define ADC_RSSI_PIN         PC0
#define ADC_CURR_PIN         PC1

#define UART1_TX_PIN         PA9
#define UART1_RX_PIN         PA10

#define UART2_RX_PIN         PA3

#define UART3_TX_PIN         PB10
#define UART3_RX_PIN         PB11

#define UART4_TX_PIN         PA0
#define UART4_RX_PIN         PA1

#define UART5_TX_PIN         PC12
#define UART5_RX_PIN         PD2

#define UART6_TX_PIN         PC6
#define UART6_RX_PIN         PC7

// TIMERS
#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PB3 , 1,  0) /* M1, TMR2_CH2 */ \
    TIMER_PIN_MAP( 1, PB4 , 1,  1) /* M2, TMR3_CH1 */ \
    TIMER_PIN_MAP( 2, PB6 , 1,  2) /* M3, TMR4_CH1 */ \
    TIMER_PIN_MAP( 3, PB7 , 1,  3) /* M4, TMR4_CH2 */

#define ADC1_DMA_OPT         4

#define BARO_I2C_INSTANCE    I2CDEV_1

#define I2C1_SCL_PIN         PB8
#define I2C1_SDA_PIN         PB9

#define PINIO1_PIN           PC8
#define PINIO1_BOX           40
#define PINIO1_CONFIG        129

#define BEEPER_INVERTED
#define DEFAULT_BLACKBOX_DEVICE         BLACKBOX_DEVICE_FLASH
#define DEFAULT_CURRENT_METER_SOURCE    CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE    VOLTAGE_METER_ADC

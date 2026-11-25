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

// Location in the config repo: configs/CUST/BUP_FC20/config.h
// BOARD_NAME must equal the folder name, MANUFACTURER_ID the parent folder.
#define FC_TARGET_MCU     AT32F435G   // AT32F435CGT7 (LQFP48, 1 MB flash)

#define BOARD_NAME        BUP_FC20
#define MANUFACTURER_ID   CUST

// 8 MHz ceramic resonator (CSTCE8M00G52) on PH0/PH1
#define SYSTEM_HSE_MHZ    8

// ---------------------------------------------------------------------------
// Sensors
// ---------------------------------------------------------------------------
#define USE_ACC
#define USE_ACC_SPI_ICM42605
#define USE_GYRO
#define USE_GYRO_SPI_ICM42605

#define USE_BARO
#define USE_BARO_DPS310               // this driver also detects the SPL07-003

// No blackbox flash on this revision (SPI3 pins are unused), so no USE_FLASH.

// ---------------------------------------------------------------------------
// SPI1: gyro (ICM-42605)
// ---------------------------------------------------------------------------
#define SPI1_SCK_PIN          PA5
#define SPI1_SDI_PIN          PA6     // MISO
#define SPI1_SDO_PIN          PA7     // MOSI

#define GYRO_1_SPI_INSTANCE   SPI1
#define GYRO_1_CS_PIN         PA4
#define GYRO_1_EXTI_PIN       PC15
#define GYRO_1_ALIGN          CW0_DEG // placeholder, verify on the bench

// ---------------------------------------------------------------------------
// I2C1: barometer (SPL07-003, SDO to GND = address 0x76, the default)
// ---------------------------------------------------------------------------
#define I2C1_SCL_PIN          PB6
#define I2C1_SDA_PIN          PB7
#define BARO_I2C_INSTANCE     I2CDEV_1

// ---------------------------------------------------------------------------
// UARTs
// ---------------------------------------------------------------------------
#define UART1_TX_PIN          PA9
#define UART1_RX_PIN          PA10

#define UART2_TX_PIN          PA2
#define UART2_RX_PIN          PA3

#define UART3_TX_PIN          PB10
#define UART3_RX_PIN          PB11

#define UART4_TX_PIN          PH3
#define UART4_RX_PIN          PH2

#define UART5_TX_PIN          PB9
#define UART5_RX_PIN          PB8

// UART1/2/3 sit on the pins the AT32 ROM bootloader listens on (DFU hijack),
// so the receiver defaults to UART5.
#define SERIALRX_UART         SERIAL_PORT_UART5
#define SERIALRX_PROVIDER     SERIALRX_CRSF
#define DEFAULT_RX_FEATURE    FEATURE_RX_SERIAL

// ---------------------------------------------------------------------------
// Motors (all on GPIOB, as the guidelines require for M1-M4)
// ---------------------------------------------------------------------------
#define MOTOR1_PIN            PB12    // TMR5_CH1
#define MOTOR2_PIN            PB13    // TMR5_CH2
#define MOTOR3_PIN            PB0     // TMR3_CH3
#define MOTOR4_PIN            PB1     // TMR3_CH4

// TIMER_PIN_MAP(index, pin, timer option, DMA option)
// UNGETESTET: die Timer-Option (3. Wert) ist geraten (1 = erste Option des Pins).
// Auf dem Board mit "timer show" pruefen, ob PB12/PB13 = TMR5_CH1/CH2 und
// PB0/PB1 = TMR3_CH3/CH4 mit Option 1 passen.
#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PB12, 1, 0) /* M1, TMR5_CH1 */ \
    TIMER_PIN_MAP( 1, PB13, 1, 1) /* M2, TMR5_CH2 */ \
    TIMER_PIN_MAP( 2, PB0 , 1, 2) /* M3, TMR3_CH3 */ \
    TIMER_PIN_MAP( 3, PB1 , 1, 3) /* M4, TMR3_CH4 */

// ---------------------------------------------------------------------------
// LEDs and beeper (all active high)
// ---------------------------------------------------------------------------
#define LED0_PIN              PB14    // blue
#define LED1_PIN              PB15    // green

#define BEEPER_PIN            PC13    // gate of an N-MOSFET, high = beeper on

// ---------------------------------------------------------------------------
// ADC
// ---------------------------------------------------------------------------
#define ADC_VBAT_PIN          PA0     // 10k / 1k divider = scale 110 (default)
#define ADC_CURR_PIN          PA1     // current sense from the ESC
#define ADC1_DMA_OPT          4       // wie beim alten FC; ohne diese Zeile liest der ADC 0

#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC

# V2 — `SFVPF435` 20 × 20

A compact, high-performance 20.5 × 20.5 mm flight controller powered by the **Artery AT32F435CGT7** (ARM Cortex-M4F @ 288 MHz), designed specifically for lightweight HD-FPV freestyle and racing drones.

## Specifications

| | |
|---|---|
| **MCU** | Artery AT32F435CGT7 (LQFP-48), up to 288 MHz |
| **Gyro** | ICM-42605 via SPI1 (low-noise, up to 8 kHz sampling) |
| **Baro** | SPL07-003 via I2C1 (high-precision altitude sensor) |
| **Analog OSD** | **None** — digital video only (HDZero, Walksnail, DJI O3/O4) |
| **Motors** | 4x DShot motor pads (`PB12`, `PB13`, `PB0`, `PB1`) with Bidirectional DShot (RPM filtering) |
| **UARTs** | 5x hardware UARTs (`UART1`, `UART2`, `UART3`, `UART4`, `UART5` default for CRSF/ELRS) |
| **I2C** | Dedicated I2C1 bus for external compass |
| **Audio/Beeper** | Onboard active-high buzzer driver (N-MOSFET on `PC13`) |
| **LEDs** | Blue (`PB14`) / Green (`PB15`) |
| **ADC** | VBAT (`PA0`, scale 110) & Current sense (`PA1`) |
| **Mount** | 20.5 × 20.5 mm (M3 / M2 with grommets) |
| **Firmware** | Betaflight |

Dropping the legacy analog OSD chip (AT7456E) saves substantial board space and eliminates video noise on modern digital FPV setups.

## Layout

```
V2_20x20_SFVPF435/
├─ Shematic/                                  hardware sources — CERN-OHL-S v2
│  ├─ ShiroFPV_Flight_Controller.kicad_sch    schematic
│  ├─ ShiroFPV_Flight_Controller.kicad_pcb    PCB layout
│  ├─ All_Own_Symbols.kicad_sym               custom symbols
│  ├─ All_Own_Symbols.pretty/                 custom footprints & 3D models
│  └─ .glb                                    3D model
└─ Release/                                   firmware — GPL-3.0-or-later
   ├─ config.h                                Betaflight target config
   └─ SFPVF435V2.hex                          compiled firmware
```

Same two-licence split as V1 — see [LICENSING.md](../LICENSING.md).

## Flashing Betaflight

1. Connect the flight controller via USB.
2. In Betaflight Configurator, open the **Firmware Flasher** tab.
3. Click **Load Firmware [Local]** and select `Release/SFPVF435V2.hex`.
4. Enable **Full chip erase** and click **Flash Firmware**.

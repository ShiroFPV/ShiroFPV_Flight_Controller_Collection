# ShiroFPV Flight Controller Collection

Open-source FPV flight controller hardware — schematic, PCB layout, symbols and
firmware target, all published in full.

Designed in KiCad, targeted at Betaflight, and licensed so it stays open.

More at **[shirofpv.com/flight-controller](https://shirofpv.com/flight-controller)**

## Boards

| Board | Size | MCU | Analog OSD | Status |
|---|---|---|---|---|
| [**V1** `SFVPF435`](V1_30x30_SFVPF435/) | 30.5 × 30.5 | AT32F435RGT7 | ✅ AT7456 | Released |
| [**V2** `SFVPF435`](V2_20x20_SFVPF435/) | 20.5 × 20.5 | AT32F435CGT7 (48-pin) | ❌ digital only | Released |

---

## V1 — `SFVPF435` (30.5 × 30.5)

| | |
|---|---|
| **MCU** | Artery AT32F435RGT7, up to 288 MHz |
| **Gyro** | ICM-20602 |
| **Baro** | BME280 |
| **OSD** | AT7456 |
| **Blackbox** | 16 Mb onboard flash |
| **USB** | USB-C |
| **Mount** | 30.5 × 30.5 mm standard stack |
| **Firmware** | Betaflight |

### Layout

```
V1_30x30_SFVPF435/
├─ Shematic/          hardware sources — CERN-OHL-S v2
│  ├─ ShiroFPV_Flight_Controller.kicad_sch    schematic
│  ├─ ShiroFPV_Flight_Controller.kicad_pcb    PCB layout
│  ├─ All_Own_Symbols.kicad_sym               custom symbols
│  ├─ All_Own_Symbols.pretty/                 custom footprints
│  └─ .glb                                    3D model
└─ Release/           firmware — GPL-3.0-or-later
   ├─ config.h                                Betaflight target config
   └─ SFPVF435V1.hex                          compiled firmware
```

> Note: `Shematic/` is a typo for `Schematic/` kept as-is so existing links and
> clones don't break.

---

## V2 — `SFVPF435` (20 × 20)

A compact, modern 20.5 × 20.5 mm flight controller designed specifically for lightweight HD-FPV freestyle and racing builds.

| | |
|---|---|
| **MCU** | Artery AT32F435CGT7 (LQFP-48), up to 288 MHz |
| **Gyro** | ICM-42605 (SPI1, 8 kHz sampling) |
| **Baro** | SPL07-003 (I2C1, address `0x76`) |
| **Analog OSD** | **None** — digital video only (HD Zero, DJI O3/O4, Walksnail) |
| **Motors** | 4x DShot motor pads (M1–M4) on TMR5/TMR3 with Bidirectional DShot (RPM filtering) |
| **UARTs** | 5x hardware UARTs (Receiver default on UART5, VTX on UART4) |
| **I2C** | Free I2C1 bus exposed for external compass |
| **USB** | USB-C |
| **Mount** | 20.5 × 20.5 mm M3 / M2 with grommets |
| **Firmware** | Betaflight |

Dropping the legacy analog OSD chip (AT7456E) saves board space, weight, and eliminates video noise on modern digital setups.

### Layout

```
V2_20x20_SFVPF435/
├─ Shematic/          hardware sources — CERN-OHL-S v2
│  ├─ ShiroFPV_Flight_Controller.kicad_sch    schematic
│  ├─ ShiroFPV_Flight_Controller.kicad_pcb    PCB layout
│  ├─ All_Own_Symbols.kicad_sym               custom symbols
│  ├─ All_Own_Symbols.pretty/                 custom footprints
│  └─ .glb                                    3D model
└─ Release/           firmware — GPL-3.0-or-later
   ├─ config.h                                Betaflight target config
   └─ SFPVF435V2.hex                          compiled firmware
```

Details in [`V2_20x20_SFVPF435/`](V2_20x20_SFVPF435/).

---

## Datasheets

Artery's documentation is not redistributed here — it is their copyright.
Download it from the source:

- **AT32F435** — [product page](https://www.arterychip.com/en/product/AT32F435.jsp)
  (datasheet + reference manual)
- **AT32F437** — [product page](https://www.arterychip.com/en/product/AT32F437.jsp)

---

## Building one

The design files are complete — schematic, layout, custom symbols and
footprints. Open `ShiroFPV_Flight_Controller.kicad_pro` in KiCad 8 or newer,
export gerbers, and send them to whichever fab you like.

Flash `SFPVF435V1.hex` or `SFPVF435V2.hex` with the Betaflight Configurator, or build from the
Betaflight sources using `config.h` as the target definition.

It flies. Mostly.

---

## Licence

Two licences, because there are two kinds of work here. Both copyleft.

| Part | Licence |
|---|---|
| Hardware design (`Shematic/`) | [CERN-OHL-S v2](LICENSE) |
| Firmware (`Release/`) | [GPL-3.0-or-later](V1_30x30_SFVPF435/Release/LICENSE) |

**Short version:** use it, modify it, build it, sell it. If you distribute a
modified version, publish your sources under the same licence. You can profit
from this design — you just can't close it.

Full detail and reasoning in **[LICENSING.md](LICENSING.md)**.

---

## Contributing

Issues and pull requests welcome — improvements, fixes, or a revision of your
own. Contributions are accepted under the same licences as above.

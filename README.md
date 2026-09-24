# ShiroFPV Flight Controller Collection

Open-source FPV flight controller hardware — schematic, PCB layout, symbols and
firmware target, all published in full.

Designed in KiCad, targeted at Betaflight, and licensed so it stays open.

More at **[shirofpv.com/flight-controller](https://shirofpv.com/flight-controller)**

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

Flash `SFPVF435V1.hex` with the Betaflight Configurator, or build from the
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

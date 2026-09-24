# V2 — `SFVPF435` 20 × 20

> **Status: in development.** Nothing to flash yet. This folder exists so the
> structure and licensing are settled before the files land.

A smaller sibling to the 30.5 × 30.5 V1 — same AT32F435 family, 20 × 20 mm
stack mount, aimed at lighter builds where a full-size stack doesn't fit.

## What's decided so far

| | |
|---|---|
| **MCU** | AT32F435, 48-pin package |
| **Mount** | 20 × 20 mm |
| **Analog OSD** | **None** — no AT7456, digital video only |
| **Firmware** | Betaflight |

Dropping the analog OSD chip is what buys the space. If you fly analog and
want an on-screen display, V1 is the board you want.

## Still to come

Gyro, baro, blackbox flash, UART count, ESC connector, power stage, exact MCU
variant and pinout — all still being worked out. This table gets filled in as
the design settles.

## Layout

```
V2_20x20_SFVPF435/
├─ Shematic/          hardware sources — CERN-OHL-S v2
└─ Release/           firmware        — GPL-3.0-or-later
```

Same two-licence split as V1 — see [LICENSING.md](../LICENSING.md).

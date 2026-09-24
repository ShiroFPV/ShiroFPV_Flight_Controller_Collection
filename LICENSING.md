# Licensing

This repository holds two different kinds of work, so it carries two licences.
Both are **copyleft**: you can use, study, modify, build and sell this — but if
you distribute a modified version, it has to stay open under the same licence.

| What | Where | Licence |
|---|---|---|
| **Hardware design** — schematic, PCB layout, symbols, footprints, 3D model | `V1_30x30_SFVPF435/Shematic/` | [CERN-OHL-S v2](LICENSE) (`CERN-OHL-S-2.0`) |
| **Firmware / target config** | `V1_30x30_SFVPF435/Release/` | [GPL-3.0-or-later](V1_30x30_SFVPF435/Release/LICENSE) |

## In plain terms

**You may**

- build this board, for yourself or for customers
- modify the design however you like
- use it commercially, including selling assembled boards
- use it in education, research, or a product

**You must**

- keep the licence and attribution intact
- publish your modified **design files** under CERN-OHL-S v2 if you distribute
  modified hardware — not just the gerbers, the actual sources
- publish modified **firmware** under GPL-3.0-or-later

**You may not**

- take this design, close it, and ship it as proprietary hardware

That last point is the whole reason for the licence choice. Selling boards is
fine. Taking the design private is not.

## Why not "non-commercial"?

Because a non-commercial clause would mean this is no longer open source —
both the [OSI definition](https://opensource.org/osd) and
[OSHWA's](https://www.oshwa.org/definition/) forbid restrictions on field of
use. It would also block schools, makerspaces and small shops far more
effectively than it blocks a company with lawyers.

Strong copyleft gets the actual goal instead: anyone may profit from the
design, but nobody may take it away from everyone else. Improve it and sell
it, and those improvements come back to the commons.

## Why the firmware is separate

`V1_30x30_SFVPF435/Release/config.h` is derived from
[Betaflight](https://github.com/betaflight/betaflight), which is GPL-3.0. That
is an inbound obligation, not a choice — anything derived from Betaflight has
to stay GPL-3.0. `SFPVF435V1.hex` is compiled Betaflight and is covered the
same way.

CERN-OHL-S is the hardware counterpart of the GPL, so the two sit together
cleanly: each covers the kind of work it was written for.

## Vendor documentation

Artery's AT32F435/437 datasheet and reference manual used to live in this
repository. They are Artery's copyrighted documents and were never mine to
redistribute, so they have been removed and are linked from the
[README](README.md) instead.

## Attribution

```
ShiroFPV Flight Controller — https://github.com/ShiroFPV/ShiroFPV_Flight_Controller_Collection
Hardware © ShiroFPV, licensed under CERN-OHL-S v2
Firmware  © ShiroFPV and the Betaflight contributors, licensed under GPL-3.0-or-later
```

SPDX identifiers: `CERN-OHL-S-2.0`, `GPL-3.0-or-later`

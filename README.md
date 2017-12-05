# Reason VM

A 16-bit virtual machine written in ReasonML.

(Based on 68000, but 16-bits wide?)

## Registers

* `d0-d7` - 16-bit data registers
* `a0-a6` - address registers (bit-width TBD)
* `a7` - stack register
* `st` - status register


## Instruction Set

All data-manipulating instructions **must** be followed by a size modifier:

`.b` - 8-bit data width
`.w` - 16-bit data width
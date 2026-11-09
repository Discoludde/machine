# OVERVIEW

> The machine is in progress and not finished! 
> All comments in code are in swedish since this is educational project for myself

## Specs
- 16 kB data & instruction memory (L1 cache)
- Single-cycle processor as of now

## Limitations / TODO 
- Wrong adressing of data memory 
- Immediate extend not yet implemented 
- Controller does not handle all opcodes yet 
- Zero value from AlU needs to be used in branch condition + some more branch logic
- Finished top module with full circuit + muxes  
- !! Now the memory uses FF ;( -> needs to use Block RAM
## Supported instructions
Considering all limitations above is resolved: 

### Supported / planned support with remaining wiring and control logic

- `ADD`
- `ADDI`
- `SUB`
- `AND`
- `ANDI`
- `OR`
- `ORI`
- `XOR`
- `XORI`
- `SLTU`
- `SLTIU`
- `SLL`
- `SLLI`
- `SRL`
- `SRLI`
- `LUI`
- `AUIPC`
- `JAL`
- `JALR`
- `BEQ`
- `BNE`
- `BLTU`
- `BGEU`
- `LW`
- `SW`

### Not yet supported — additional functionality required

- `SLT`
- `SLTI`
- `SRA`
- `SRAI`
- `BLT`
- `BGE`
- `LB`
- `LBU`
- `LH`
- `LHU`
- `SB`
- `SH`
- `FENCE`
- `ECALL`
- `EBREAK`

`timescale 1ns/1ps

module instr_mem(
    input logic [31:0] pc,
    output logic [31:0] instruction // ^ Do not have to be same length
    );

    // L1 instruction cache
    logic [31:0] inst_mem[3999:0]; // 16 KB memory

    assign instruction = inst_mem[pc >> 2]; // >> 2 för att dividera på 4 då varje inst. är 4 bytes (ett ord) 
endmodule


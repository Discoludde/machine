`timescale 1ns/1ps

module reg_mem(
    input logic rst,
    input logic clk,
    input logic [4:0] rd,  
    input logic [4:0] r1,
    input logic [4:0] r2,
    input logic [31:0] wdata,
    input logic we,
    output logic [31:0] rdata1,
    output logic [31:0] rdata2
    );

    logic [31:0] registers [0:31]; // 32 register 2^5 med 32 bitar data i varje 
    logic [31:0] registers_next [0:31]; 

    always_ff @(posedge clk) begin
        if(rst) begin
            for(int i = 0;i < 32;i++)begin
                registers[i] <= 32'b0;
            end
        end else begin
            registers <= registers_next;
        end
    end 
    
    always_comb begin
        registers_next = registers;
        rdata1 = registers[r1];
        rdata2 = registers[r2];
        if(we && rd != 0) begin
            registers_next[rd] = wdata; 
        end
    end

endmodule

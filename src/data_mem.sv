`timescale 1ns/1ps

module data_mem(
    input logic rst,
    input logic clk,
    input logic we, // write enable 
    input logic [31:0] adress,
    input logic [31:0] data_in,
    output logic [31:0] data_out
    );

    // L1 data cache
    logic [31:0] data_mem[0:3999]; // 16 KB data memory
    logic [31:0] data_mem_next[0:3999]; 

    always_ff @(posedge clk) begin
        if(rst) begin
            for(int i = 0;i < 32;i++) begin
                data_mem[i] <= 32'b0;
            end 
        end else begin
            data_mem <= data_mem_next;
        end
    end

    // Async read
    assign data_out = data_mem[adress];
    // Write comb
    always_comb begin
        data_mem_next = data_mem;
        if(we) begin
            data_mem_next[adress] = data_in;
        end
    end
endmodule


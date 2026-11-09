`timescale 1ns/1ps

module alu (
    input logic [31:0] A,
    input logic [31:0] B,
    input logic [2:0] alu_ctrl,
    output logic [31:0] alu_res
);
    
    localparam ADD = 0; 
    localparam SUB = 1; 
    localparam AND = 2; 
    localparam OR = 3; 
    localparam XOR = 4;
    localparam SLTU = 5; 
    localparam SLL = 6; 
    localparam SRL = 7; 

    always_comb begin
        case(alu_ctrl)
            ADD : alu_res = A + B;
            SUB : alu_res = A - B;
            AND : alu_res = A & B;
            OR  : alu_res = A | B;
            XOR : alu_res = A ^ B;
            SLTU: alu_res = (A < B) ? 32'd1 : 32'd0;
            SLL : alu_res = A << B[4:0];
            SRL : alu_res = A >> B[4:0];
            default: alu_res = 32'd0;
        endcase
    end 
endmodule

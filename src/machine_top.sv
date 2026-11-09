// TITLE: Machine

`timescale 1ns/1ps

module machine_top(
    input logic clk,
    input logic rst 
);

    //Internal connections
    logic [31:0] pc;
    logic [31:0] pc_next;
    logic [31:0] instruction;
    logic [31:0] imm_extended;
    logic [31:0] data_out;
    logic [31:0] result;
    logic [31:0] alu_res;
    logic [31:0] A;
    logic [31:0] B;

    logic pc_ctrl;
    logic result_ctrl;
    logic we_reg;
     
    /*-------------PC--------------*/
    always_ff @(posedge clk) begin
        if(rst) begin
            pc <= 0;
        end else begin
            pc <= pc_next;
        end
    end
    always_comb begin
        if(pc_ctrl) begin
            pc_next = pc + imm_extended; 
        end else begin
            pc_next = pc + 4;    
        end
    end
    /*-------------PC--------------*/

    instr_mem instr_mem_inst(
        .pc(pc),
        .instruction(instruction)
    );

    reg_mem reg_mem_inst(
        .rst(rst),
        .clk(clk),
        .rd(instruction[11:7]),
        .r1(instruction[19:15]),
        .r2(instruction[24:20]),
        .wdata(result),
        .we(we_reg),
        .rdata1(A),
        .rdata2(B)
    );

    assign result = result_ctrl ? data_out : alu_res;

endmodule

`timescale 1ns/1ps

module controller(
    input logic rst,
    input logic [6:0] opcode,
    input logic [2:0] funct3,
    input logic [6:0] funct7,
    input logic zero,
    output logic pc_ctrl,
    output logic result_ctrl,
    output logic we_reg,
    output logic [2:0] alu_ctrl,
    output logic [1:0] imm_ctrl,
    output logic we_data 
);

    localparam ADD = 0; 
    localparam SUB = 1; 
    localparam AND = 2; 
    localparam OR = 3; 
    localparam XOR = 4;
    localparam SLTU = 5; 
    localparam SLL = 6; 
    localparam SRL = 7;
    localparam SRA = 9; // NOT IMPLEMENTED !!!
    localparam SLT = 10; // NOT IMPLEMENTED !!!

    localparam R = 7'b0110011; 
    localparam I_AR = 7'b0010011; 
    localparam LOAD = 7'b0000011; 
    localparam S = 7'b0100011; // Store  
    localparam B = 7'b1100011; // Branch 
    localparam U = 7'b0110111; // Load upper?  
    localparam J = 7'b1101111; // JAL 


    // Styrsignaler
    always_comb begin
        pc_ctrl = 0;
        result_ctrl = 0;
        we_reg = 1;
        imm_ctrl = 0; // TODO
        we_data = 0;

        case(opcode) 
            /* I_AR : begin */
            /*     imm_ctrl = */ 
            /* end */
            LOAD : begin
                result_ctrl = 1;
            end
            S : begin
                we_data = 1;
                we_reg = 0;
            end
            B : begin
                pc_ctrl = 1;
                we_reg = 0;
            end
        endcase    
    end

    // ALU signaler 
    always_comb begin
        case(opcode)
            R: begin
                case (funct3)
                    3'b000: alu_ctrl = (funct7 == 7'b0100000) ? SUB : ADD;
                    3'b111: alu_ctrl = AND;
                    3'b110: alu_ctrl = OR;
                    3'b100: alu_ctrl = XOR;
                    3'b010: alu_ctrl = SLT;
                    3'b011: alu_ctrl = SLTU;
                    3'b001: alu_ctrl = SLL;
                    3'b101: alu_ctrl = (funct7 == 7'b0100000) ? SRA : SRL;
                    default: alu_ctrl = ADD;
                endcase
            end
        endcase
    end

endmodule

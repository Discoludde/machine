module controller (
	rst,
	opcode,
	funct3,
	funct7,
	zero,
	pc_ctrl,
	result_ctrl,
	we_reg,
	alu_ctrl,
	imm_ctrl,
	we_data
);
	reg _sv2v_0;
	input wire rst;
	input wire [6:0] opcode;
	input wire [2:0] funct3;
	input wire [6:0] funct7;
	input wire zero;
	output reg pc_ctrl;
	output reg result_ctrl;
	output reg we_reg;
	output reg [2:0] alu_ctrl;
	output reg [1:0] imm_ctrl;
	output reg we_data;
	localparam ADD = 0;
	localparam SUB = 1;
	localparam AND = 2;
	localparam OR = 3;
	localparam XOR = 4;
	localparam SLTU = 5;
	localparam SLL = 6;
	localparam SRL = 7;
	localparam SRA = 9;
	localparam SLT = 10;
	localparam R = 7'b0110011;
	localparam I_AR = 7'b0010011;
	localparam LOAD = 7'b0000011;
	localparam S = 7'b0100011;
	localparam B = 7'b1100011;
	localparam U = 7'b0110111;
	localparam J = 7'b1101111;
	always @(*) begin
		if (_sv2v_0)
			;
		pc_ctrl = 0;
		result_ctrl = 0;
		we_reg = 1;
		imm_ctrl = 0;
		we_data = 0;
		case (opcode)
			LOAD: result_ctrl = 1;
			S: begin
				we_data = 1;
				we_reg = 0;
			end
			B: begin
				pc_ctrl = 1;
				we_reg = 0;
			end
		endcase
	end
	always @(*) begin
		if (_sv2v_0)
			;
		case (opcode)
			R:
				case (funct3)
					3'b000: alu_ctrl = (funct7 == 7'b0100000 ? SUB : ADD);
					3'b111: alu_ctrl = AND;
					3'b110: alu_ctrl = OR;
					3'b100: alu_ctrl = XOR;
					3'b010: alu_ctrl = SLT;
					3'b011: alu_ctrl = SLTU;
					3'b001: alu_ctrl = SLL;
					3'b101: alu_ctrl = (funct7 == 7'b0100000 ? SRA : SRL);
					default: alu_ctrl = ADD;
				endcase
		endcase
	end
	initial _sv2v_0 = 0;
endmodule
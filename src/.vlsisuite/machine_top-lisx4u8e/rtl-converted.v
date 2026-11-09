module machine_top (
	clk,
	rst
);
	reg _sv2v_0;
	input wire clk;
	input wire rst;
	reg [31:0] pc;
	reg [31:0] pc_next;
	wire [31:0] instruction;
	wire [31:0] imm_extended;
	wire [31:0] data_out;
	wire [31:0] result;
	wire [31:0] alu_res;
	wire [31:0] A;
	wire [31:0] B;
	wire pc_ctrl;
	wire result_ctrl;
	wire we_reg;
	always @(posedge clk)
		if (rst)
			pc <= 0;
		else
			pc <= pc_next;
	always @(*) begin
		if (_sv2v_0)
			;
		if (pc_ctrl)
			pc_next = pc + imm_extended;
		else
			pc_next = pc + 4;
	end
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
	assign result = (result_ctrl ? data_out : alu_res);
	initial _sv2v_0 = 0;
endmodule
module instr_mem (
	pc,
	instruction
);
	input wire [31:0] pc;
	output wire [31:0] instruction;
	wire [31:0] inst_mem [3999:0];
	assign instruction = inst_mem[pc >> 2];
endmodule
module reg_mem (
	rst,
	clk,
	rd,
	r1,
	r2,
	wdata,
	we,
	rdata1,
	rdata2
);
	reg _sv2v_0;
	input wire rst;
	input wire clk;
	input wire [4:0] rd;
	input wire [4:0] r1;
	input wire [4:0] r2;
	input wire [31:0] wdata;
	input wire we;
	output reg [31:0] rdata1;
	output reg [31:0] rdata2;
	reg [1023:0] registers;
	reg [1023:0] registers_next;
	always @(posedge clk)
		if (rst) begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 0; i < 32; i = i + 1)
				registers[(31 - i) * 32+:32] <= 32'b00000000000000000000000000000000;
		end
		else
			registers <= registers_next;
	always @(*) begin
		if (_sv2v_0)
			;
		registers_next = registers;
		rdata1 = registers[(31 - r1) * 32+:32];
		rdata2 = registers[(31 - r2) * 32+:32];
		if (we && (rd != 0))
			registers_next[(31 - rd) * 32+:32] = wdata;
	end
	initial _sv2v_0 = 0;
endmodule

module NIOS_SoC (
	clk_clk,
	reset_reset_n,
	btn_export,
	hex0_export,
	hex1_export,
	hex2_export,
	hex3_export,
	hex4_export,
	hex5_export,
	timer_export,
	uartpc_rxd,
	uartpc_txd);	

	input		clk_clk;
	input		reset_reset_n;
	input	[3:0]	btn_export;
	output	[6:0]	hex0_export;
	output	[6:0]	hex1_export;
	output	[6:0]	hex2_export;
	output	[6:0]	hex3_export;
	output	[6:0]	hex4_export;
	output	[6:0]	hex5_export;
	output		timer_export;
	input		uartpc_rxd;
	output		uartpc_txd;
endmodule

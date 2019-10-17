
module alarm (
	buttons_export,
	clk_clk,
	hours_export,
	leds_export,
	minutes_export,
	reset_reset_n,
	seconds_export,
	switches_export,
	uart_RXD,
	uart_TXD,
	alarm_export);	

	input	[3:0]	buttons_export;
	input		clk_clk;
	output	[15:0]	hours_export;
	output	[9:0]	leds_export;
	output	[15:0]	minutes_export;
	input		reset_reset_n;
	output	[15:0]	seconds_export;
	input	[1:0]	switches_export;
	input		uart_RXD;
	output		uart_TXD;
	output		alarm_export;
endmodule

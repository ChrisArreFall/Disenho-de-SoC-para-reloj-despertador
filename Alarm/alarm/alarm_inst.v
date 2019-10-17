	alarm u0 (
		.buttons_export  (<connected-to-buttons_export>),  //  buttons.export
		.clk_clk         (<connected-to-clk_clk>),         //      clk.clk
		.hours_export    (<connected-to-hours_export>),    //    hours.export
		.leds_export     (<connected-to-leds_export>),     //     leds.export
		.minutes_export  (<connected-to-minutes_export>),  //  minutes.export
		.reset_reset_n   (<connected-to-reset_reset_n>),   //    reset.reset_n
		.seconds_export  (<connected-to-seconds_export>),  //  seconds.export
		.switches_export (<connected-to-switches_export>), // switches.export
		.uart_RXD        (<connected-to-uart_RXD>),        //     uart.RXD
		.uart_TXD        (<connected-to-uart_TXD>),        //         .TXD
		.alarm_export    (<connected-to-alarm_export>)     //    alarm.export
	);


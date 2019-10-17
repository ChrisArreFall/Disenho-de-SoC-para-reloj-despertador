	component alarm is
		port (
			buttons_export  : in  std_logic_vector(3 downto 0)  := (others => 'X'); -- export
			clk_clk         : in  std_logic                     := 'X';             -- clk
			hours_export    : out std_logic_vector(15 downto 0);                    -- export
			leds_export     : out std_logic_vector(9 downto 0);                     -- export
			minutes_export  : out std_logic_vector(15 downto 0);                    -- export
			reset_reset_n   : in  std_logic                     := 'X';             -- reset_n
			seconds_export  : out std_logic_vector(15 downto 0);                    -- export
			switches_export : in  std_logic_vector(1 downto 0)  := (others => 'X'); -- export
			uart_RXD        : in  std_logic                     := 'X';             -- RXD
			uart_TXD        : out std_logic;                                        -- TXD
			alarm_export    : out std_logic                                         -- export
		);
	end component alarm;

	u0 : component alarm
		port map (
			buttons_export  => CONNECTED_TO_buttons_export,  --  buttons.export
			clk_clk         => CONNECTED_TO_clk_clk,         --      clk.clk
			hours_export    => CONNECTED_TO_hours_export,    --    hours.export
			leds_export     => CONNECTED_TO_leds_export,     --     leds.export
			minutes_export  => CONNECTED_TO_minutes_export,  --  minutes.export
			reset_reset_n   => CONNECTED_TO_reset_reset_n,   --    reset.reset_n
			seconds_export  => CONNECTED_TO_seconds_export,  --  seconds.export
			switches_export => CONNECTED_TO_switches_export, -- switches.export
			uart_RXD        => CONNECTED_TO_uart_RXD,        --     uart.RXD
			uart_TXD        => CONNECTED_TO_uart_TXD,        --         .TXD
			alarm_export    => CONNECTED_TO_alarm_export     --    alarm.export
		);


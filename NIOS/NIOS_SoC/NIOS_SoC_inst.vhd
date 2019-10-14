	component NIOS_SoC is
		port (
			clk_clk       : in  std_logic                    := 'X';             -- clk
			reset_reset_n : in  std_logic                    := 'X';             -- reset_n
			btn_export    : in  std_logic_vector(3 downto 0) := (others => 'X'); -- export
			hex0_export   : out std_logic_vector(6 downto 0);                    -- export
			hex1_export   : out std_logic_vector(6 downto 0);                    -- export
			hex2_export   : out std_logic_vector(6 downto 0);                    -- export
			hex3_export   : out std_logic_vector(6 downto 0);                    -- export
			hex4_export   : out std_logic_vector(6 downto 0);                    -- export
			hex5_export   : out std_logic_vector(6 downto 0);                    -- export
			timer_export  : out std_logic;                                       -- export
			uartpc_rxd    : in  std_logic                    := 'X';             -- rxd
			uartpc_txd    : out std_logic                                        -- txd
		);
	end component NIOS_SoC;

	u0 : component NIOS_SoC
		port map (
			clk_clk       => CONNECTED_TO_clk_clk,       --    clk.clk
			reset_reset_n => CONNECTED_TO_reset_reset_n, --  reset.reset_n
			btn_export    => CONNECTED_TO_btn_export,    --    btn.export
			hex0_export   => CONNECTED_TO_hex0_export,   --   hex0.export
			hex1_export   => CONNECTED_TO_hex1_export,   --   hex1.export
			hex2_export   => CONNECTED_TO_hex2_export,   --   hex2.export
			hex3_export   => CONNECTED_TO_hex3_export,   --   hex3.export
			hex4_export   => CONNECTED_TO_hex4_export,   --   hex4.export
			hex5_export   => CONNECTED_TO_hex5_export,   --   hex5.export
			timer_export  => CONNECTED_TO_timer_export,  --  timer.export
			uartpc_rxd    => CONNECTED_TO_uartpc_rxd,    -- uartpc.rxd
			uartpc_txd    => CONNECTED_TO_uartpc_txd     --       .txd
		);


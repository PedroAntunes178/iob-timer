	// verilator_coverage annotation
	`timescale 1ns/1ps
	`include "iob_lib.vh"
	`include "TIMERsw_reg.vh"
	
	module timer_core
	  #(
	    parameter DATA_W = 32
	    )
	   (
%000001	    `INPUT(TIMER_ENABLE, `TIMER_ENABLE_W),
%000004	    `INPUT(TIMER_SAMPLE, `TIMER_SAMPLE_W),
 000170	    `OUTPUT(TIMER_VALUE, `TIMER_DATA_LOW_W+`TIMER_DATA_HIGH_W),
 000099	    `INPUT(clk, 1),
%000002	    `INPUT(rst, 1)
	    );
	
	
 000149	   `SIGNAL(time_counter, 2*DATA_W)
 000100	   `COUNTER_ARE(clk, rst, TIMER_ENABLE, time_counter)
%000014	   verilator_coverage: (next point on previous line)

 000086	   verilator_coverage: (next point on previous line)

%000000	   verilator_coverage: (next point on previous line)

	
	   //time counter register
 000170	   `SIGNAL(counter_reg, 2*DATA_W)
	
 000098	   `REG_E(clk, TIMER_SAMPLE, counter_reg, time_counter)
 000086	   verilator_coverage: (next point on previous line)

%000006	   verilator_coverage: (next point on previous line)

	   //always @(negedge clk) if(TIMER_SAMPLE)  counter_reg <= time_counter;
	
	   `SIGNAL2OUT(TIMER_VALUE, counter_reg)
	
	endmodule
	

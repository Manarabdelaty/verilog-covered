/*
 Name:     timescale2.6.v
 Author:   Trevor Williams  (phase1geo@gmail.com)
 Date:     11/25/2006
 Purpose:  Verifies multiple timescale specifications within the design when
           top module timescale is 1 s / 1 ps.
*/

`timescale 1 s / 1 ps

module main;

ts_module tsm();

initial begin
`ifdef DUMP
        $dumpfile( "timescale2.6.vcd" );
        $dumpvars( 0, main );
`endif
        #10;
        $finish;
end

endmodule

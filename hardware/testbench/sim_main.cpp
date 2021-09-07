// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed under the Creative Commons Public Domain, for
// any use, without warranty, 2017 by Wilson Snyder.
// SPDX-License-Identifier: CC0-1.0
//======================================================================

// For std::unique_ptr
#include <memory>

// Include common routines
#include <verilated.h>

// Include model header, generated from Verilating "top.v"
#include "Vtimer_core.h"

// Legacy function required only so linking works on Cygwin and MSVC++
double sc_time_stamp() { return 0; }

int main(int argc, char** argv, char** env) {
    // This is a more complicated example, please also see the simpler examples/make_hello_c.

    // Prevent unused variable warnings
    if (false && argc && argv && env) {}

    // Create logs/ directory in case we have traces to put under it
    Verilated::mkdir("logs");

    // Construct a VerilatedContext to hold simulation time, etc.
    // Multiple modules (made later below with Vtimer_core) may share the same
    // context to share time, or modules may have different contexts if
    // they should be independent from each other.

    // Using unique_ptr is similar to
    // "VerilatedContext* contextp = new VerilatedContext" then deleting at end.
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

    // Set debug level, 0 is off, 9 is highest presently used
    // May be overridden by commandArgs argument parsing
    contextp->debug(0);

    // Randomization reset policy
    // May be overridden by commandArgs argument parsing
    contextp->randReset(2);

    // Verilator must compute traced signals
    contextp->traceEverOn(true);

    // Pass arguments so Verilated code can see them, e.g. $value$plusargs
    // This needs to be called before you create any model
    contextp->commandArgs(argc, argv);

    // Construct the Verilated model, from Vtimer_core.h generated from Verilating "top.v".
    // Using unique_ptr is similar to "Vtimer_core* top = new Vtimer_core" then deleting at end.
    // "TOP" will be the hierarchical name of the module.
    const std::unique_ptr<Vtimer_core> top{new Vtimer_core{contextp.get(), "TOP"}};

    // Set Vtimer_core's input signals
    top->rst = !0;
    top->clk = 0;
    top->TIMER_SAMPLE = 0;
    top->TIMER_ENABLE = 0;

    // Simulate 50 clk cycles
    while (contextp->time()<100) {

        contextp->timeInc(1);  // 1 timeprecision period passes...
        top->clk = !top->clk;

        if(contextp->time()==2)
          top->TIMER_ENABLE = 1;

        if (!top->clk) {
            if (contextp->time() > 3 && contextp->time() < 90) {
                top->rst = !1;  // Assert reset
            } else {
                top->rst = !0;  // Deassert reset
            }
            // Assign some other inputs
            if(contextp->time()<50 || contextp->time()>60)
              top->TIMER_SAMPLE = 1;
            else
              top->TIMER_SAMPLE = 0;
        }

        top->eval();

        // Read outputs
        VL_PRINTF("[%" VL_PRI64 "d] clk=%x rstl=%x Sample=%x ENABLE=%x -> Output=%" VL_PRI64 "d\n",
                  contextp->time(), top->clk, top->rst, top->TIMER_SAMPLE, top->TIMER_ENABLE, top->TIMER_VALUE);
    }

    // Final model cleanup
    top->final();

    // Coverage analysis (calling write only after the test is known to pass)
#if VM_COVERAGE
    Verilated::mkdir("logs");
    contextp->coveragep()->write("logs/coverage.dat");
#endif

    // Return good completion status
    // Don't use exit() or destructor won't get called
    return 0;
}

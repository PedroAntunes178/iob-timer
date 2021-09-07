// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtimer_core.h for the primary calling header

#ifndef VERILATED_VTIMER_CORE___024ROOT_H_
#define VERILATED_VTIMER_CORE___024ROOT_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class Vtimer_core__Syms;
class Vtimer_core_VerilatedVcd;


//----------

VL_MODULE(Vtimer_core___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(TIMER_ENABLE,0,0);
    VL_IN8(TIMER_SAMPLE,0,0);
    VL_OUT64(TIMER_VALUE,63,0);

    // LOCAL SIGNALS
    QData/*63:0*/ timer_core__DOT__time_counter;
    QData/*63:0*/ timer_core__DOT__counter_reg;

    // LOCAL VARIABLES
    CData/*0:0*/ timer_core__DOT____Vtogcov__TIMER_ENABLE;
    CData/*0:0*/ timer_core__DOT____Vtogcov__TIMER_SAMPLE;
    CData/*0:0*/ timer_core__DOT____Vtogcov__clk;
    CData/*0:0*/ timer_core__DOT____Vtogcov__rst;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    QData/*63:0*/ timer_core__DOT____Vtogcov__TIMER_VALUE;
    QData/*63:0*/ timer_core__DOT____Vtogcov__time_counter;
    QData/*63:0*/ timer_core__DOT____Vtogcov__counter_reg;
    QData/*63:0*/ __Vdly__timer_core__DOT__time_counter;

    // INTERNAL VARIABLES
    Vtimer_core__Syms* vlSymsp;  // Symbol table
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtimer_core___024root);  ///< Copying not allowed
  public:
    Vtimer_core___024root(const char* name);
    ~Vtimer_core___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtimer_core__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

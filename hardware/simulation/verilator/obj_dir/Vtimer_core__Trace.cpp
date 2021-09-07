// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtimer_core__Syms.h"


void Vtimer_core___024root__traceChgSub0(Vtimer_core___024root* vlSelf, VerilatedVcd* tracep);

void Vtimer_core___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtimer_core___024root* const __restrict vlSelf = static_cast<Vtimer_core___024root*>(voidSelf);
    Vtimer_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtimer_core___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtimer_core___024root__traceChgSub0(Vtimer_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlSelf->TIMER_ENABLE));
        tracep->chgBit(oldp+1,(vlSelf->TIMER_SAMPLE));
        tracep->chgQData(oldp+2,(vlSelf->TIMER_VALUE),64);
        tracep->chgBit(oldp+4,(vlSelf->clk));
        tracep->chgBit(oldp+5,(vlSelf->rst));
        tracep->chgQData(oldp+6,(vlSelf->timer_core__DOT__time_counter),64);
        tracep->chgQData(oldp+8,(vlSelf->timer_core__DOT__counter_reg),64);
    }
}

void Vtimer_core___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vtimer_core___024root* const __restrict vlSelf = static_cast<Vtimer_core___024root*>(voidSelf);
    Vtimer_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}

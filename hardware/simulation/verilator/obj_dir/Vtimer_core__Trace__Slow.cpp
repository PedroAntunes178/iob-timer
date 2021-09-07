// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtimer_core__Syms.h"


void Vtimer_core___024root__traceInitSub0(Vtimer_core___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtimer_core___024root__traceInitTop(Vtimer_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtimer_core___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtimer_core___024root__traceInitSub0(Vtimer_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"TIMER_ENABLE", false,-1, 0,0);
        tracep->declBus(c+2,"TIMER_SAMPLE", false,-1, 0,0);
        tracep->declQuad(c+3,"TIMER_VALUE", false,-1, 63,0);
        tracep->declBus(c+5,"clk", false,-1, 0,0);
        tracep->declBus(c+6,"rst", false,-1, 0,0);
        tracep->declBus(c+11,"timer_core DATA_W", false,-1, 31,0);
        tracep->declBus(c+1,"timer_core TIMER_ENABLE", false,-1, 0,0);
        tracep->declBus(c+2,"timer_core TIMER_SAMPLE", false,-1, 0,0);
        tracep->declQuad(c+3,"timer_core TIMER_VALUE", false,-1, 63,0);
        tracep->declBus(c+5,"timer_core clk", false,-1, 0,0);
        tracep->declBus(c+6,"timer_core rst", false,-1, 0,0);
        tracep->declQuad(c+7,"timer_core time_counter", false,-1, 63,0);
        tracep->declQuad(c+9,"timer_core counter_reg", false,-1, 63,0);
    }
}

void Vtimer_core___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtimer_core___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtimer_core___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtimer_core___024root__traceRegister(Vtimer_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtimer_core___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtimer_core___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtimer_core___024root__traceCleanup, vlSelf);
    }
}

void Vtimer_core___024root__traceFullSub0(Vtimer_core___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtimer_core___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtimer_core___024root* const __restrict vlSelf = static_cast<Vtimer_core___024root*>(voidSelf);
    Vtimer_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtimer_core___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtimer_core___024root__traceFullSub0(Vtimer_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->TIMER_ENABLE));
        tracep->fullBit(oldp+2,(vlSelf->TIMER_SAMPLE));
        tracep->fullQData(oldp+3,(vlSelf->TIMER_VALUE),64);
        tracep->fullBit(oldp+5,(vlSelf->clk));
        tracep->fullBit(oldp+6,(vlSelf->rst));
        tracep->fullQData(oldp+7,(vlSelf->timer_core__DOT__time_counter),64);
        tracep->fullQData(oldp+9,(vlSelf->timer_core__DOT__counter_reg),64);
        tracep->fullIData(oldp+11,(0x20U),32);
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtimer_core.h for the primary calling header

#include "Vtimer_core___024root.h"
#include "Vtimer_core__Syms.h"

//==========

VL_INLINE_OPT void Vtimer_core___024root___combo__TOP__1(Vtimer_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_core___024root___combo__TOP__1\n"); );
    // Body
    if (((IData)(vlSelf->TIMER_ENABLE) ^ (IData)(vlSelf->timer_core__DOT____Vtogcov__TIMER_ENABLE))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_ENABLE 
            = vlSelf->TIMER_ENABLE;
    }
    if (((IData)(vlSelf->TIMER_SAMPLE) ^ (IData)(vlSelf->timer_core__DOT____Vtogcov__TIMER_SAMPLE))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_SAMPLE 
            = vlSelf->TIMER_SAMPLE;
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->timer_core__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->timer_core__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->rst) ^ (IData)(vlSelf->timer_core__DOT____Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->timer_core__DOT____Vtogcov__rst = vlSelf->rst;
    }
}

VL_INLINE_OPT void Vtimer_core___024root___sequent__TOP__3(Vtimer_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_core___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->__Vdly__timer_core__DOT__time_counter = vlSelf->timer_core__DOT__time_counter;
    ++(vlSymsp->__Vcoverage[135]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->__Vdly__timer_core__DOT__time_counter = 0ULL;
    } else if (vlSelf->TIMER_ENABLE) {
        vlSelf->__Vdly__timer_core__DOT__time_counter 
            = (1ULL + vlSelf->timer_core__DOT__time_counter);
        ++(vlSymsp->__Vcoverage[132]);
    } else {
        ++(vlSymsp->__Vcoverage[133]);
    }
}

VL_INLINE_OPT void Vtimer_core___024root___sequent__TOP__4(Vtimer_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_core___024root___sequent__TOP__4\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[202]);
    if (vlSelf->TIMER_SAMPLE) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->timer_core__DOT__counter_reg = vlSelf->timer_core__DOT__time_counter;
    } else {
        ++(vlSymsp->__Vcoverage[201]);
    }
    if ((1U & ((IData)(vlSelf->timer_core__DOT__counter_reg) 
               ^ (IData)(vlSelf->timer_core__DOT____Vtogcov__counter_reg)))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffffffffffffeULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | (IData)((IData)((1U & (IData)(vlSelf->timer_core__DOT__counter_reg)))));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 1U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffffffffffffdULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 2U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffffffffffffbULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 3U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffffffffffff7ULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 4U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffffffffffffefULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 5U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffffffffffffdfULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 6U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffffffffffffbfULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 7U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffffffffffff7fULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 8U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffffffffffeffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 9U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffffffffffdffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0xaU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffffffffffbffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0xbU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffffffffff7ffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0xcU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffffffffffefffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0xdU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffffffffffdfffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0xeU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffffffffffbfffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0xfU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffffffffff7fffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x10U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffffffffeffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x11U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffffffffdffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x12U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffffffffbffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x13U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffffffff7ffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x14U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffffffffefffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x15U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffffffffdfffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x16U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffffffffbfffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x17U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffffffff7fffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x18U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffffffeffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x19U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffffffdffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x1aU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffffffbffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x1bU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffffff7ffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x1cU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffffffefffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x1dU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffffffdfffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x1eU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffffffbfffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x1fU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffffff7fffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x20U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffffeffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x21U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffffdffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x22U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffffbffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x23U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffff7ffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x24U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffffefffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x25U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffffdfffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x26U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffffbfffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x27U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffff7fffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x28U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffeffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x29U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffdffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x2aU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffffbffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x2bU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffff7ffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x2cU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffefffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x2dU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffdfffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x2eU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffffbfffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x2fU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffff7fffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x30U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffeffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x31U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffdffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x32U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfffbffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x33U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfff7ffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x34U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffefffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x35U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffdfffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x36U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xffbfffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x37U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xff7fffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x38U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfeffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x39U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfdffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x3aU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xfbffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x3bU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xf7ffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x3cU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xefffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x3dU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xdfffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x3eU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0xbfffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__counter_reg 
                        >> 0x3fU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__counter_reg 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->timer_core__DOT____Vtogcov__counter_reg 
            = ((0x7fffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__counter_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__counter_reg 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->TIMER_VALUE = vlSelf->timer_core__DOT__counter_reg;
    if ((1U & ((IData)(vlSelf->TIMER_VALUE) ^ (IData)(vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffffffffffffeULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | (IData)((IData)((1U & (IData)(vlSelf->TIMER_VALUE)))));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 1U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffffffffffffdULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 2U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffffffffffffbULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 3U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffffffffffff7ULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 4U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffffffffffffefULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 5U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffffffffffffdfULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 6U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffffffffffffbfULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 7U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffffffffffff7fULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 8U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffffffffffeffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 9U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffffffffffdffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0xaU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffffffffffbffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0xbU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffffffffff7ffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0xcU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffffffffffefffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0xdU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffffffffffdfffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0xeU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffffffffffbfffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0xfU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffffffffff7fffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x10U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffffffffeffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x11U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffffffffdffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x12U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffffffffbffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x13U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffffffff7ffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x14U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffffffffefffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x15U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffffffffdfffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x16U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffffffffbfffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x17U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffffffff7fffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x18U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffffffeffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x19U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffffffdffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x1aU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffffffbffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x1bU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffffff7ffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x1cU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffffffefffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x1dU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffffffdfffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x1eU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffffffbfffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x1fU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffffff7fffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x20U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffffeffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x21U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffffdffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x22U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffffbffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x23U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffff7ffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x24U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffffefffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x25U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffffdfffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x26U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffffbfffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x27U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffff7fffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x28U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffeffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x29U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffdffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x2aU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffffbffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x2bU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffff7ffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x2cU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffefffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x2dU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffdfffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x2eU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffffbfffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x2fU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffff7fffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x30U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffeffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x31U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffdffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x32U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfffbffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x33U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfff7ffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x34U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffefffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x35U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffdfffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x36U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xffbfffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x37U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xff7fffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x38U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfeffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x39U)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfdffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x3aU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xfbffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x3bU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xf7ffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x3cU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xefffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x3dU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xdfffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x3eU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0xbfffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->TIMER_VALUE >> 0x3fU)) 
               ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE 
            = ((0x7fffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__TIMER_VALUE) 
               | ((QData)((IData)((1U & (IData)((vlSelf->TIMER_VALUE 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}

VL_INLINE_OPT void Vtimer_core___024root___sequent__TOP__5(Vtimer_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_core___024root___sequent__TOP__5\n"); );
    // Body
    vlSelf->timer_core__DOT__time_counter = vlSelf->__Vdly__timer_core__DOT__time_counter;
    if ((1U & ((IData)(vlSelf->timer_core__DOT__time_counter) 
               ^ (IData)(vlSelf->timer_core__DOT____Vtogcov__time_counter)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffffffffffffeULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | (IData)((IData)((1U & (IData)(vlSelf->timer_core__DOT__time_counter)))));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 1U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffffffffffffdULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 2U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffffffffffffbULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 3U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffffffffffff7ULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 4U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffffffffffffefULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 5U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffffffffffffdfULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 6U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffffffffffffbfULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 7U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffffffffffff7fULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 8U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffffffffffeffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 9U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffffffffffdffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0xaU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffffffffffbffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0xbU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffffffffff7ffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0xcU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffffffffffefffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0xdU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffffffffffdfffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0xeU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffffffffffbfffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0xfU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffffffffff7fffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x10U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffffffffeffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x11U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffffffffdffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x12U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffffffffbffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x13U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffffffff7ffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x14U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffffffffefffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x15U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffffffffdfffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x16U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffffffffbfffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x17U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffffffff7fffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x18U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffffffeffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x19U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffffffdffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x1aU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffffffbffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x1bU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffffff7ffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x1cU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffffffefffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x1dU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffffffdfffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x1eU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffffffbfffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x1fU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffffff7fffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x20U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffffeffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x21U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffffdffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x22U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffffbffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x23U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffff7ffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x24U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffffefffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x25U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffffdfffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x26U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffffbfffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x27U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffff7fffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x28U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffeffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x29U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffdffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x2aU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffffbffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x2bU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffff7ffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x2cU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffefffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x2dU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffdfffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x2eU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffffbfffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x2fU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffff7fffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x30U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffeffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x31U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffdffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x32U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfffbffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x33U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfff7ffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x34U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffefffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x35U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffdfffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x36U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xffbfffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x37U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xff7fffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x38U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfeffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x39U)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfdffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x3aU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xfbffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x3bU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xf7ffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x3cU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xefffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x3dU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xdfffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x3eU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0xbfffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->timer_core__DOT__time_counter 
                        >> 0x3fU)) ^ (IData)((vlSelf->timer_core__DOT____Vtogcov__time_counter 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->timer_core__DOT____Vtogcov__time_counter 
            = ((0x7fffffffffffffffULL & vlSelf->timer_core__DOT____Vtogcov__time_counter) 
               | ((QData)((IData)((1U & (IData)((vlSelf->timer_core__DOT__time_counter 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}

void Vtimer_core___024root___eval(Vtimer_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_core___024root___eval\n"); );
    // Body
    Vtimer_core___024root___combo__TOP__1(vlSelf);
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtimer_core___024root___sequent__TOP__3(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtimer_core___024root___sequent__TOP__4(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtimer_core___024root___sequent__TOP__5(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

QData Vtimer_core___024root___change_request_1(Vtimer_core___024root* vlSelf);

VL_INLINE_OPT QData Vtimer_core___024root___change_request(Vtimer_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_core___024root___change_request\n"); );
    // Body
    return (Vtimer_core___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtimer_core___024root___change_request_1(Vtimer_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_core___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtimer_core___024root___eval_debug_assertions(Vtimer_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_core___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->TIMER_ENABLE & 0xfeU))) {
        Verilated::overWidthError("TIMER_ENABLE");}
    if (VL_UNLIKELY((vlSelf->TIMER_SAMPLE & 0xfeU))) {
        Verilated::overWidthError("TIMER_SAMPLE");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG

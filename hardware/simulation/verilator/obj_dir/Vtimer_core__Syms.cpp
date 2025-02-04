// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtimer_core__Syms.h"
#include "Vtimer_core.h"
#include "Vtimer_core___024root.h"

// FUNCTIONS
Vtimer_core__Syms::~Vtimer_core__Syms()
{
}

Vtimer_core__Syms::Vtimer_core__Syms(VerilatedContext* contextp, const char* namep,Vtimer_core* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}

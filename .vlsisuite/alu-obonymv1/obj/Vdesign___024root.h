// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdesign.h for the primary calling header

#ifndef VERILATED_VDESIGN___024ROOT_H_
#define VERILATED_VDESIGN___024ROOT_H_  // guard

#include "verilated.h"


class Vdesign__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdesign___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(alu_ctrl,2,0);
    CData/*2:0*/ __Vtrigprevexpr___TOP__alu_ctrl__0;
    CData/*0:0*/ __VicoDidInit;
    VL_IN(A,31,0);
    VL_IN(B,31,0);
    VL_OUT(alu_res,31,0);
    IData/*31:0*/ __Vtrigprevexpr___TOP__A__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__B__0;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;

    // INTERNAL VARIABLES
    Vdesign__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdesign___024root(Vdesign__Syms* symsp, const char* namep);
    ~Vdesign___024root();
    VL_UNCOPYABLE(Vdesign___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

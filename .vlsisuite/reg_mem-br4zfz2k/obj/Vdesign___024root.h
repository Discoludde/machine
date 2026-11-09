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
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(rd,4,0);
    VL_IN8(r1,4,0);
    VL_IN8(r2,4,0);
    VL_IN8(we,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*4:0*/ __Vtrigprevexpr___TOP__rd__0;
    CData/*4:0*/ __Vtrigprevexpr___TOP__r1__0;
    CData/*4:0*/ __Vtrigprevexpr___TOP__r2__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__we__0;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
    VL_IN(wdata,31,0);
    VL_OUT(rdata1,31,0);
    VL_OUT(rdata2,31,0);
    IData/*31:0*/ __Vtrigprevexpr___TOP__wdata__0;
    VlUnpacked<IData/*31:0*/, 32> reg_mem__DOT__registers;
    VlUnpacked<IData/*31:0*/, 32> reg_mem__DOT__registers_next;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

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

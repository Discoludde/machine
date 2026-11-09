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
    VL_IN8(rst,0,0);
    VL_IN8(opcode,6,0);
    VL_IN8(funct3,2,0);
    VL_IN8(funct7,6,0);
    VL_IN8(zero,0,0);
    VL_OUT8(pc_ctrl,0,0);
    VL_OUT8(result_ctrl,0,0);
    VL_OUT8(we_reg,0,0);
    VL_OUT8(alu_ctrl,2,0);
    VL_OUT8(imm_ctrl,1,0);
    VL_OUT8(we_data,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*6:0*/ __Vtrigprevexpr___TOP__opcode__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__funct3__0;
    CData/*6:0*/ __Vtrigprevexpr___TOP__funct7__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__zero__0;
    CData/*0:0*/ __VicoDidInit;
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

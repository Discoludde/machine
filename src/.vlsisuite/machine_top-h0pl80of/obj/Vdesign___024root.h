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
    CData/*0:0*/ machine_top__DOT__pc_ctrl;
    CData/*0:0*/ machine_top__DOT__result_ctrl;
    CData/*0:0*/ machine_top__DOT__we_reg;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
    IData/*31:0*/ machine_top__DOT__pc;
    IData/*31:0*/ machine_top__DOT__pc_next;
    IData/*31:0*/ machine_top__DOT__instruction;
    IData/*31:0*/ machine_top__DOT__imm_extended;
    IData/*31:0*/ machine_top__DOT__data_out;
    IData/*31:0*/ machine_top__DOT__alu_res;
    VlUnpacked<IData/*31:0*/, 32> machine_top__DOT__reg_mem_inst__DOT__registers;
    VlUnpacked<IData/*31:0*/, 32> machine_top__DOT__reg_mem_inst__DOT__registers_next;
    VlUnpacked<IData/*31:0*/, 4000> machine_top__DOT__instr_mem_inst__DOT__inst_mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

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

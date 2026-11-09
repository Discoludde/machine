// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign.h for the primary calling header

#include "Vdesign__pch.h"

void Vdesign___024root___eval_sample(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_sample\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdesign___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vdesign___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

bool Vdesign___024root___eval_ico(Vdesign___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_ico\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | (IData)((IData)(firstIteration)));
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        (((((IData)(vlSelfRef.we) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__we__0)) 
                                                           << 6U) 
                                                          | (((vlSelfRef.wdata 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__wdata__0) 
                                                              << 5U) 
                                                             | (((IData)(vlSelfRef.r2) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__r2__0)) 
                                                                << 4U))) 
                                                         | (((((IData)(vlSelfRef.r1) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__r1__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.rd) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rd__0)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.clk) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.rst) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rd__0 = vlSelfRef.rd;
        vlSelfRef.__Vtrigprevexpr___TOP__r1__0 = vlSelfRef.r1;
        vlSelfRef.__Vtrigprevexpr___TOP__r2__0 = vlSelfRef.r2;
        vlSelfRef.__Vtrigprevexpr___TOP__wdata__0 = vlSelfRef.wdata;
        vlSelfRef.__Vtrigprevexpr___TOP__we__0 = vlSelfRef.we;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000010ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000020ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000040ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdesign___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vdesign___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_body__ico
            if ((8ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__0
                    vlSelfRef.rdata1 = vlSelfRef.reg_mem__DOT__registers
                        [vlSelfRef.r1];
                }
            }
            if ((0x0000000000000010ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__1
                    vlSelfRef.rdata2 = vlSelfRef.reg_mem__DOT__registers
                        [vlSelfRef.r2];
                }
            }
            if ((0x0000000000000064ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    vlSelfRef.reg_mem__DOT__registers_next 
                        = vlSelfRef.reg_mem__DOT__registers;
                    if (((IData)(vlSelfRef.we) & (0U 
                                                  != (IData)(vlSelfRef.rd)))) {
                        vlSelfRef.reg_mem__DOT__registers_next[vlSelfRef.rd] 
                            = vlSelfRef.wdata;
                    }
                }
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
            }
        }
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdesign___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void Vdesign___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vdesign___024root___eval_act(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_act\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((IData)(vlSelfRef.clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdesign___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vdesign___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

bool Vdesign___024root___eval_inact(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_inact\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vdesign___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vdesign___024root___eval_body__nba(Vdesign___024root* vlSelf);
void Vdesign___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vdesign___024root___eval_nba(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_nba\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vdesign___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vdesign___024root___eval_body__nba(vlSelf);
        Vdesign___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vdesign___024root___eval_obs(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_obs\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vdesign___024root___eval_react(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_react\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vdesign___024root___eval_postponed(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_postponed\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vdesign___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

bool Vdesign___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vdesign___024root___eval_body__nba(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_body__nba\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            if (vlSelfRef.rst) {
                vlSelfRef.reg_mem__DOT__registers[0U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[1U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[2U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[3U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[4U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[5U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[6U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[7U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[8U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[9U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[10U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[11U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[12U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[13U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[14U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[15U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[16U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[17U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[18U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[19U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[20U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[21U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[22U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[23U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[24U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[25U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[26U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[27U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[28U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[29U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[30U] = 0U;
                vlSelfRef.reg_mem__DOT__registers[31U] = 0U;
            } else {
                vlSelfRef.reg_mem__DOT__registers = vlSelfRef.reg_mem__DOT__registers_next;
            }
            vlSelfRef.rdata1 = vlSelfRef.reg_mem__DOT__registers
                [vlSelfRef.r1];
            vlSelfRef.rdata2 = vlSelfRef.reg_mem__DOT__registers
                [vlSelfRef.r2];
            vlSelfRef.reg_mem__DOT__registers_next 
                = vlSelfRef.reg_mem__DOT__registers;
            if (((IData)(vlSelfRef.we) & (0U != (IData)(vlSelfRef.rd)))) {
                vlSelfRef.reg_mem__DOT__registers_next[vlSelfRef.rd] 
                    = vlSelfRef.wdata;
            }
        }
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vdesign___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vdesign___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Vdesign___024root___eval_debug_assertions(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_debug_assertions\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rd & 0xe0U)))) {
        Verilated::overWidthError("rd");
    }
    if (VL_UNLIKELY(((vlSelfRef.r1 & 0xe0U)))) {
        Verilated::overWidthError("r1");
    }
    if (VL_UNLIKELY(((vlSelfRef.r2 & 0xe0U)))) {
        Verilated::overWidthError("r2");
    }
    if (VL_UNLIKELY(((vlSelfRef.we & 0xfeU)))) {
        Verilated::overWidthError("we");
    }
}
#endif  // VL_DEBUG

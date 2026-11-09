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
extern const VlWide<128>/*4095:0*/ Vdesign__ConstPool__CONST_hecc84c1a_0;

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
                                                        ((((IData)(vlSelfRef.zero) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__zero__0)) 
                                                          << 4U) 
                                                         | (((((IData)(vlSelfRef.funct7) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__funct7__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.funct3) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__funct3__0)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.opcode) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__opcode__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.rst) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
        vlSelfRef.__Vtrigprevexpr___TOP__opcode__0 
            = vlSelfRef.opcode;
        vlSelfRef.__Vtrigprevexpr___TOP__funct3__0 
            = vlSelfRef.funct3;
        vlSelfRef.__Vtrigprevexpr___TOP__funct7__0 
            = vlSelfRef.funct7;
        vlSelfRef.__Vtrigprevexpr___TOP__zero__0 = vlSelfRef.zero;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000010ULL 
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
            if ((0x000000000000000eULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    if ((0x33U == (IData)(vlSelfRef.opcode))) {
                        vlSelfRef.alu_ctrl = (7U & 
                                              ((4U 
                                                & (IData)(vlSelfRef.funct3))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.funct3))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.funct3))
                                                     ? 2U
                                                     : 3U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.funct3))
                                                     ? 
                                                    ((0x20U 
                                                      == (IData)(vlSelfRef.funct7))
                                                      ? 9U
                                                      : 7U)
                                                     : 4U))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.funct3))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.funct3))
                                                     ? 5U
                                                     : 2U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.funct3))
                                                     ? 6U
                                                     : 
                                                    ((0x20U 
                                                      == (IData)(vlSelfRef.funct7))
                                                      ? 1U
                                                      : 0U)))));
                    }
                }
            }
            if ((2ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__0
                    CData/*3:0*/ __Vinline_0__eval_body__ico___Vinline_0__ico_sequent__TOP__0___VdfgRegularize_h6e95ff9d_0_0;
                    __Vinline_0__eval_body__ico___Vinline_0__ico_sequent__TOP__0___VdfgRegularize_h6e95ff9d_0_0 = 0;
                    __Vinline_0__eval_body__ico___Vinline_0__ico_sequent__TOP__0___VdfgRegularize_h6e95ff9d_0_0 
                        = (0x0000000fU & Vdesign__ConstPool__CONST_hecc84c1a_0
                           [(0x07ffffffU & (IData)(vlSelfRef.opcode))]);
                    vlSelfRef.pc_ctrl = (1U & (__Vinline_0__eval_body__ico___Vinline_0__ico_sequent__TOP__0___VdfgRegularize_h6e95ff9d_0_0 
                                               >> 3U));
                    vlSelfRef.result_ctrl = (1U & (__Vinline_0__eval_body__ico___Vinline_0__ico_sequent__TOP__0___VdfgRegularize_h6e95ff9d_0_0 
                                                   >> 2U));
                    vlSelfRef.we_reg = (1U & (__Vinline_0__eval_body__ico___Vinline_0__ico_sequent__TOP__0___VdfgRegularize_h6e95ff9d_0_0 
                                              >> 1U));
                    vlSelfRef.we_data = (1U & __Vinline_0__eval_body__ico___Vinline_0__ico_sequent__TOP__0___VdfgRegularize_h6e95ff9d_0_0);
                }
            }
        }
    }
    return (__VicoExecute);
}

bool Vdesign___024root___eval_act(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_act\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vdesign___024root___eval_inact(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_inact\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vdesign___024root___eval_nba(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_nba\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
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

#ifdef VL_DEBUG
void Vdesign___024root___eval_debug_assertions(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_debug_assertions\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.opcode & 0x80U)))) {
        Verilated::overWidthError("opcode");
    }
    if (VL_UNLIKELY(((vlSelfRef.funct3 & 0xf8U)))) {
        Verilated::overWidthError("funct3");
    }
    if (VL_UNLIKELY(((vlSelfRef.funct7 & 0x80U)))) {
        Verilated::overWidthError("funct7");
    }
    if (VL_UNLIKELY(((vlSelfRef.zero & 0xfeU)))) {
        Verilated::overWidthError("zero");
    }
}
#endif  // VL_DEBUG

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
                                                        ((((IData)(vlSelfRef.alu_ctrl) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu_ctrl__0)) 
                                                          << 2U) 
                                                         | (((vlSelfRef.B 
                                                              != vlSelfRef.__Vtrigprevexpr___TOP__B__0) 
                                                             << 1U) 
                                                            | (vlSelfRef.A 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__A__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__A__0 = vlSelfRef.A;
        vlSelfRef.__Vtrigprevexpr___TOP__B__0 = vlSelfRef.B;
        vlSelfRef.__Vtrigprevexpr___TOP__alu_ctrl__0 
            = vlSelfRef.alu_ctrl;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
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
            if ((7ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    vlSelfRef.alu_res = (((0U == (IData)(vlSelfRef.alu_ctrl))
                                           ? (vlSelfRef.A 
                                              + vlSelfRef.B)
                                           : ((1U == (IData)(vlSelfRef.alu_ctrl))
                                               ? (vlSelfRef.A 
                                                  - vlSelfRef.B)
                                               : ((2U 
                                                   == (IData)(vlSelfRef.alu_ctrl))
                                                   ? 
                                                  (vlSelfRef.A 
                                                   & vlSelfRef.B)
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.alu_ctrl))
                                                    ? 
                                                   (vlSelfRef.A 
                                                    | vlSelfRef.B)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.alu_ctrl))
                                                     ? 
                                                    (vlSelfRef.A 
                                                     ^ vlSelfRef.B)
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.alu_ctrl))
                                                      ? 
                                                     (1U 
                                                      & (- (IData)(
                                                                   (vlSelfRef.A 
                                                                    < vlSelfRef.B))))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.alu_ctrl))
                                                       ? 
                                                      (vlSelfRef.A 
                                                       << 
                                                       (0x0000001fU 
                                                        & vlSelfRef.B))
                                                       : 
                                                      (vlSelfRef.A 
                                                       >> 
                                                       (0x0000001fU 
                                                        & vlSelfRef.B))))))))) 
                                         & (- (IData)(
                                                      ((0U 
                                                        == (IData)(vlSelfRef.alu_ctrl)) 
                                                       | ((1U 
                                                           == (IData)(vlSelfRef.alu_ctrl)) 
                                                          | ((2U 
                                                              == (IData)(vlSelfRef.alu_ctrl)) 
                                                             | ((3U 
                                                                 == (IData)(vlSelfRef.alu_ctrl)) 
                                                                | ((4U 
                                                                    == (IData)(vlSelfRef.alu_ctrl)) 
                                                                   | ((5U 
                                                                       == (IData)(vlSelfRef.alu_ctrl)) 
                                                                      | ((6U 
                                                                          == (IData)(vlSelfRef.alu_ctrl)) 
                                                                         | (7U 
                                                                            == (IData)(vlSelfRef.alu_ctrl))))))))))));
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
    if (VL_UNLIKELY(((vlSelfRef.alu_ctrl & 0xf8U)))) {
        Verilated::overWidthError("alu_ctrl");
    }
}
#endif  // VL_DEBUG

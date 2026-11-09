// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign.h for the primary calling header

#include "Vdesign__pch.h"

VL_ATTR_COLD void Vdesign___024root___eval_static(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_static\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__A__0 = vlSelfRef.A;
    vlSelfRef.__Vtrigprevexpr___TOP__B__0 = vlSelfRef.B;
    vlSelfRef.__Vtrigprevexpr___TOP__alu_ctrl__0 = vlSelfRef.alu_ctrl;
}

VL_ATTR_COLD void Vdesign___024root___eval_initial(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_initial\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdesign___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdesign___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vdesign___024root___eval_stl(Vdesign___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_stl\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdesign___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vdesign___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
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
    return (__VstlExecute);
}

VL_ATTR_COLD void Vdesign___024root___eval_dump_triggers__stl(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_dump_triggers__stl\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vdesign___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdesign___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdesign___024root___eval_dump_triggers__ico(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_dump_triggers__ico\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vdesign___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

VL_ATTR_COLD void Vdesign___024root___eval_dump_triggers__act(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_dump_triggers__act\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdesign___024root___eval_dump_triggers__nba(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_dump_triggers__nba\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdesign___024root___eval_dump_triggers__obs(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_dump_triggers__obs\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdesign___024root___eval_dump_triggers__react(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_dump_triggers__react\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdesign___024root___eval_final(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_final\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdesign___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vdesign___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vdesign___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___trigger_anySet__stl\n"); );
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

bool Vdesign___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdesign___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vdesign___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( A)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( B)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( alu_ctrl)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdesign___024root___ctor_var_reset(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___ctor_var_reset\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3969090544990846983ull);
    vlSelf->B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 149303876845869574ull);
    vlSelf->alu_ctrl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12133164084066234300ull);
    vlSelf->alu_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 464524836129561967ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__A__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__B__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__alu_ctrl__0 = 0;
    vlSelf->__VicoDidInit = 0;
}

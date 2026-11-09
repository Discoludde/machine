// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign.h for the primary calling header

#include "Vdesign__pch.h"

VL_ATTR_COLD void Vdesign___024root___eval_static(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_static\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
    vlSelfRef.__Vtrigprevexpr___TOP__opcode__0 = vlSelfRef.opcode;
    vlSelfRef.__Vtrigprevexpr___TOP__funct3__0 = vlSelfRef.funct3;
    vlSelfRef.__Vtrigprevexpr___TOP__funct7__0 = vlSelfRef.funct7;
    vlSelfRef.__Vtrigprevexpr___TOP__zero__0 = vlSelfRef.zero;
}

VL_ATTR_COLD void Vdesign___024root___eval_initial(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_initial\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.imm_ctrl = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdesign___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdesign___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
extern const VlWide<128>/*4095:0*/ Vdesign__ConstPool__CONST_hecc84c1a_0;

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
                    // Inlined CFunc: _stl_sequent__TOP__0
                    CData/*3:0*/ __Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0___VdfgRegularize_h6e95ff9d_0_0;
                    __Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0___VdfgRegularize_h6e95ff9d_0_0 = 0;
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
                    __Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0___VdfgRegularize_h6e95ff9d_0_0 
                        = (0x0000000fU & Vdesign__ConstPool__CONST_hecc84c1a_0
                           [(0x07ffffffU & (IData)(vlSelfRef.opcode))]);
                    vlSelfRef.pc_ctrl = (1U & (__Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0___VdfgRegularize_h6e95ff9d_0_0 
                                               >> 3U));
                    vlSelfRef.result_ctrl = (1U & (__Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0___VdfgRegularize_h6e95ff9d_0_0 
                                                   >> 2U));
                    vlSelfRef.we_reg = (1U & (__Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0___VdfgRegularize_h6e95ff9d_0_0 
                                              >> 1U));
                    vlSelfRef.we_data = (1U & __Vinline_0__eval_body__stl___Vinline_0__stl_sequent__TOP__0___VdfgRegularize_h6e95ff9d_0_0);
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( opcode)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( funct3)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( funct7)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( zero)\n");
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
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17409787017080135397ull);
    vlSelf->funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17679969967366941577ull);
    vlSelf->funct7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6751744391700333915ull);
    vlSelf->zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10977623970759875275ull);
    vlSelf->pc_ctrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11424257255665268248ull);
    vlSelf->result_ctrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13865034735958747996ull);
    vlSelf->we_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13055815437085455020ull);
    vlSelf->alu_ctrl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12133164084066234300ull);
    vlSelf->imm_ctrl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16230478961206041842ull);
    vlSelf->we_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3849984996081762546ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__opcode__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__funct3__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__funct7__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__zero__0 = 0;
    vlSelf->__VicoDidInit = 0;
}

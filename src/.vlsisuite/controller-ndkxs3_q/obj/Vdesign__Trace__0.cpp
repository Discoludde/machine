// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vdesign__Syms.h"


void Vdesign___024root__trace_chg_0_sub_0(Vdesign___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdesign___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root__trace_chg_0\n"); );
    // Body
    Vdesign___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdesign___024root*>(voidSelf);
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vdesign___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdesign___024root__trace_chg_0_sub_0(Vdesign___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root__trace_chg_0_sub_0\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSelfRef.rst));
    bufp->chgCData(oldp+1,(vlSelfRef.opcode),7);
    bufp->chgCData(oldp+2,(vlSelfRef.funct3),3);
    bufp->chgCData(oldp+3,(vlSelfRef.funct7),7);
    bufp->chgBit(oldp+4,(vlSelfRef.zero));
    bufp->chgBit(oldp+5,(vlSelfRef.pc_ctrl));
    bufp->chgBit(oldp+6,(vlSelfRef.result_ctrl));
    bufp->chgBit(oldp+7,(vlSelfRef.we_reg));
    bufp->chgCData(oldp+8,(vlSelfRef.alu_ctrl),3);
    bufp->chgBit(oldp+9,(vlSelfRef.we_data));
}

void Vdesign___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vdesign___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdesign___024root*>(voidSelf);
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}

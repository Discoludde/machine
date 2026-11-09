// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vdesign__Syms.h"


VL_ATTR_COLD void Vdesign___024root__trace_init_dtype____0(Vdesign___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vdesign___024root__trace_init_sub__TOP__0(Vdesign___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root__trace_init_sub__TOP__0\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$rootio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+72,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "machine_top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+72,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"imm_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+75,0,"data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"alu_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"pc_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+79,0,"result_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"we_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "instr_mem_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "reg_mem_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+72,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"r1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"r2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);

    Vdesign___024root__trace_init_dtype____0(vlSelf, tracep, "registers", 0, c+8, VerilatedTraceSigDirection::NONE);
    VL_TRACE_PUSH_PREFIX(tracep, "registers_next", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+40+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vdesign___024root__trace_init_dtype_sub____0(Vdesign___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vdesign___024root__trace_init_dtype____0(Vdesign___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root__trace_init_dtype____0\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdesign___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vdesign___024root__trace_init_dtype_sub____0(Vdesign___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root__trace_init_dtype_sub____0\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vdesign___024root__trace_init_top(Vdesign___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root__trace_init_top\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdesign___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdesign___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdesign___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdesign___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdesign___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdesign___024root__trace_register(Vdesign___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root__trace_register\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdesign___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vdesign___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vdesign___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vdesign___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdesign___024root__trace_const_0_sub_0(Vdesign___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdesign___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root__trace_const_0\n"); );
    // Body
    Vdesign___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdesign___024root*>(voidSelf);
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vdesign___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdesign___024root__trace_const_0_sub_0(Vdesign___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root__trace_const_0_sub_0\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+74,(vlSelfRef.machine_top__DOT__imm_extended),32);
    bufp->fullIData(oldp+75,(vlSelfRef.machine_top__DOT__data_out),32);
    bufp->fullIData(oldp+76,(((IData)(vlSelfRef.machine_top__DOT__result_ctrl)
                               ? vlSelfRef.machine_top__DOT__data_out
                               : vlSelfRef.machine_top__DOT__alu_res)),32);
    bufp->fullIData(oldp+77,(vlSelfRef.machine_top__DOT__alu_res),32);
    bufp->fullBit(oldp+78,(vlSelfRef.machine_top__DOT__pc_ctrl));
    bufp->fullBit(oldp+79,(vlSelfRef.machine_top__DOT__result_ctrl));
    bufp->fullBit(oldp+80,(vlSelfRef.machine_top__DOT__we_reg));
}

VL_ATTR_COLD void Vdesign___024root__trace_full_0_sub_0(Vdesign___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdesign___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root__trace_full_0\n"); );
    // Body
    Vdesign___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdesign___024root*>(voidSelf);
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vdesign___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdesign___024root__trace_full_dtype____0(Vdesign___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);

VL_ATTR_COLD void Vdesign___024root__trace_full_0_sub_0(Vdesign___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root__trace_full_0_sub_0\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.machine_top__DOT__pc),32);
    bufp->fullIData(oldp+1,(((IData)(vlSelfRef.machine_top__DOT__pc_ctrl)
                              ? (vlSelfRef.machine_top__DOT__pc 
                                 + vlSelfRef.machine_top__DOT__imm_extended)
                              : ((IData)(4U) + vlSelfRef.machine_top__DOT__pc))),32);
    bufp->fullIData(oldp+2,(vlSelfRef.machine_top__DOT__instruction),32);
    bufp->fullIData(oldp+3,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers
                            [(0x0000001fU & (vlSelfRef.machine_top__DOT__instruction 
                                             >> 0x0000000fU))]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers
                            [(0x0000001fU & (vlSelfRef.machine_top__DOT__instruction 
                                             >> 0x00000014U))]),32);
    bufp->fullCData(oldp+5,((0x0000001fU & (vlSelfRef.machine_top__DOT__instruction 
                                            >> 7U))),5);
    bufp->fullCData(oldp+6,((0x0000001fU & (vlSelfRef.machine_top__DOT__instruction 
                                            >> 0x0000000fU))),5);
    bufp->fullCData(oldp+7,((0x0000001fU & (vlSelfRef.machine_top__DOT__instruction 
                                            >> 0x00000014U))),5);
    Vdesign___024root__trace_full_dtype____0(vlSelf, bufp, 8, vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers);
    bufp->fullIData(oldp+40,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[0]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[1]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[2]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[3]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[4]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[5]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[6]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[7]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[8]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[9]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[10]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[11]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[12]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[13]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[14]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[15]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[16]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[17]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[18]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[19]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[20]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[21]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[22]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[23]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[24]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[25]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[26]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[27]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[28]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[29]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[30]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.machine_top__DOT__reg_mem_inst__DOT__registers_next[31]),32);
    bufp->fullBit(oldp+72,(vlSelfRef.clk));
    bufp->fullBit(oldp+73,(vlSelfRef.rst));
}

VL_ATTR_COLD void Vdesign___024root__trace_full_dtype____0(Vdesign___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root__trace_full_dtype____0\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[13]),32);
    bufp->fullIData(oldp+14,(__VdtypeVar[14]),32);
    bufp->fullIData(oldp+15,(__VdtypeVar[15]),32);
    bufp->fullIData(oldp+16,(__VdtypeVar[16]),32);
    bufp->fullIData(oldp+17,(__VdtypeVar[17]),32);
    bufp->fullIData(oldp+18,(__VdtypeVar[18]),32);
    bufp->fullIData(oldp+19,(__VdtypeVar[19]),32);
    bufp->fullIData(oldp+20,(__VdtypeVar[20]),32);
    bufp->fullIData(oldp+21,(__VdtypeVar[21]),32);
    bufp->fullIData(oldp+22,(__VdtypeVar[22]),32);
    bufp->fullIData(oldp+23,(__VdtypeVar[23]),32);
    bufp->fullIData(oldp+24,(__VdtypeVar[24]),32);
    bufp->fullIData(oldp+25,(__VdtypeVar[25]),32);
    bufp->fullIData(oldp+26,(__VdtypeVar[26]),32);
    bufp->fullIData(oldp+27,(__VdtypeVar[27]),32);
    bufp->fullIData(oldp+28,(__VdtypeVar[28]),32);
    bufp->fullIData(oldp+29,(__VdtypeVar[29]),32);
    bufp->fullIData(oldp+30,(__VdtypeVar[30]),32);
    bufp->fullIData(oldp+31,(__VdtypeVar[31]),32);
}

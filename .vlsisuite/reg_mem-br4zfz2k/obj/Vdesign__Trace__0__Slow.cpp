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
    VL_TRACE_DECL_BIT(tracep,c+32,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"r1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"r2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "reg_mem", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"r1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"r2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);

    Vdesign___024root__trace_init_dtype____0(vlSelf, tracep, "registers", 0, c+41, VerilatedTraceSigDirection::NONE);
    VL_TRACE_PUSH_PREFIX(tracep, "registers_next", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
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

VL_ATTR_COLD void Vdesign___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root__trace_const_0\n"); );
    // Body
    Vdesign___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdesign___024root*>(voidSelf);
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    bufp->fullIData(oldp+0,(vlSelfRef.reg_mem__DOT__registers_next[0]),32);
    bufp->fullIData(oldp+1,(vlSelfRef.reg_mem__DOT__registers_next[1]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.reg_mem__DOT__registers_next[2]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.reg_mem__DOT__registers_next[3]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.reg_mem__DOT__registers_next[4]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.reg_mem__DOT__registers_next[5]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.reg_mem__DOT__registers_next[6]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.reg_mem__DOT__registers_next[7]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.reg_mem__DOT__registers_next[8]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.reg_mem__DOT__registers_next[9]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.reg_mem__DOT__registers_next[10]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.reg_mem__DOT__registers_next[11]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.reg_mem__DOT__registers_next[12]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.reg_mem__DOT__registers_next[13]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.reg_mem__DOT__registers_next[14]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.reg_mem__DOT__registers_next[15]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.reg_mem__DOT__registers_next[16]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.reg_mem__DOT__registers_next[17]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.reg_mem__DOT__registers_next[18]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.reg_mem__DOT__registers_next[19]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.reg_mem__DOT__registers_next[20]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.reg_mem__DOT__registers_next[21]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.reg_mem__DOT__registers_next[22]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.reg_mem__DOT__registers_next[23]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.reg_mem__DOT__registers_next[24]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.reg_mem__DOT__registers_next[25]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.reg_mem__DOT__registers_next[26]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.reg_mem__DOT__registers_next[27]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.reg_mem__DOT__registers_next[28]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.reg_mem__DOT__registers_next[29]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.reg_mem__DOT__registers_next[30]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.reg_mem__DOT__registers_next[31]),32);
    bufp->fullBit(oldp+32,(vlSelfRef.rst));
    bufp->fullBit(oldp+33,(vlSelfRef.clk));
    bufp->fullCData(oldp+34,(vlSelfRef.rd),5);
    bufp->fullCData(oldp+35,(vlSelfRef.r1),5);
    bufp->fullCData(oldp+36,(vlSelfRef.r2),5);
    bufp->fullIData(oldp+37,(vlSelfRef.wdata),32);
    bufp->fullBit(oldp+38,(vlSelfRef.we));
    bufp->fullIData(oldp+39,(vlSelfRef.rdata1),32);
    bufp->fullIData(oldp+40,(vlSelfRef.rdata2),32);
    Vdesign___024root__trace_full_dtype____0(vlSelf, bufp, 41, vlSelfRef.reg_mem__DOT__registers);
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

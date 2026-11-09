// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdesign__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdesign::Vdesign(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdesign__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , pc{vlSymsp->TOP.pc}
    , instruction{vlSymsp->TOP.instruction}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vdesign::Vdesign(const char* _vcname__)
    : Vdesign(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdesign::~Vdesign() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdesign___024root___eval_debug_assertions(Vdesign___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vdesign___024root___eval_static(Vdesign___024root* vlSelf);
VL_ATTR_COLD void Vdesign___024root___eval_initial(Vdesign___024root* vlSelf);
VL_ATTR_COLD bool Vdesign___024root___eval_stl(Vdesign___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vdesign___024root___eval_sample(Vdesign___024root* vlSelf);
bool Vdesign___024root___eval_ico(Vdesign___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vdesign___024root___eval_act(Vdesign___024root* vlSelf);
bool Vdesign___024root___eval_inact(Vdesign___024root* vlSelf);
bool Vdesign___024root___eval_nba(Vdesign___024root* vlSelf);
bool Vdesign___024root___eval_obs(Vdesign___024root* vlSelf);
bool Vdesign___024root___eval_react(Vdesign___024root* vlSelf);
void Vdesign___024root___eval_postponed(Vdesign___024root* vlSelf);
VL_ATTR_COLD void Vdesign___024root___eval_final(Vdesign___024root* vlSelf);
VL_ATTR_COLD void Vdesign___024root___eval_dump_triggers__stl(Vdesign___024root* vlSelf);
VL_ATTR_COLD void Vdesign___024root___eval_dump_triggers__ico(Vdesign___024root* vlSelf);
VL_ATTR_COLD void Vdesign___024root___eval_dump_triggers__act(Vdesign___024root* vlSelf);
VL_ATTR_COLD void Vdesign___024root___eval_dump_triggers__nba(Vdesign___024root* vlSelf);
VL_ATTR_COLD void Vdesign___024root___eval_dump_triggers__obs(Vdesign___024root* vlSelf);
VL_ATTR_COLD void Vdesign___024root___eval_dump_triggers__react(Vdesign___024root* vlSelf);

void Vdesign::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdesign::eval_step\n"); );
    m_evalLoop.eval();
}

void Vdesign::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vdesign___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vdesign::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vdesign::evalStatic() {
    Vdesign___024root___eval_static(&(vlSymsp->TOP));
}

void Vdesign::evalInitial() {
    Vdesign___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vdesign::evalStl(bool firstIteration) {
    return Vdesign___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vdesign::evalSample() {
    Vdesign___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vdesign::evalIco(bool firstIteration) {
    return Vdesign___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vdesign::evalAct() {
    return Vdesign___024root___eval_act(&(vlSymsp->TOP));
}

bool Vdesign::evalInact() {
    return Vdesign___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vdesign::evalNba() {
    return Vdesign___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vdesign::evalObs() {
    return Vdesign___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vdesign::evalReact() {
    return Vdesign___024root___eval_react(&(vlSymsp->TOP));
}

void Vdesign::evalPostponed() {
    Vdesign___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vdesign::evalFinal() {
    Vdesign___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdesign::dumpTriggersStl() {
    Vdesign___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdesign::dumpTriggersIco() {
    Vdesign___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdesign::dumpTriggersAct() {
    Vdesign___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdesign::dumpTriggersNba() {
    Vdesign___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdesign::dumpTriggersObs() {
    Vdesign___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdesign::dumpTriggersReact() {
    Vdesign___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vdesign::eventsPending() { return false; }

uint64_t Vdesign::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdesign::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdesign::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdesign::hierName() const { return vlSymsp->name(); }
const char* Vdesign::modelName() const { return "Vdesign"; }
unsigned Vdesign::threads() const { return 1; }
void Vdesign::prepareClone() const { contextp()->prepareClone(); }
void Vdesign::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdesign::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vdesign___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdesign___024root__trace_init_top(Vdesign___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdesign___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdesign___024root*>(voidSelf);
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vdesign___024root__trace_decl_types(tracep);
    Vdesign___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdesign___024root__trace_register(Vdesign___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdesign::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdesign::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 4);
    Vdesign___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}

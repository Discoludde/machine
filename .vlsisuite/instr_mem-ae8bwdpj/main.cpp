#include "Vdesign.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
int main(int argc, char** argv) {
    VerilatedContext context;
    context.commandArgs(argc, argv);
    context.traceEverOn(true);
    Vdesign model{&context};
    VerilatedVcdC trace;
    unsigned long long steps = 0;
    int status = 0;
    while (!context.gotFinish()) {
        model.eval();
        if (context.gotFinish()) break;
        if (!model.eventsPending()) {
            std::cerr << "Inga fler stimuli. Använd en testbänk för klocka och insignaler.\n";
            break;
        }
        if (++steps >= 1000000ULL) {
            std::cerr << "Simuleringen nådde --max-events utan $finish.\n";
            status = 2; break;
        }
        context.time(model.nextTimeSlot());
    }
    model.final();
    trace.close();
    return status;
}

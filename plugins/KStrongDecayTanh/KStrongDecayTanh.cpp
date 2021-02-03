// PluginKStrongDecayTanh.cpp
// Aleksandar Koruga (aleksandar.koruga@gmail.com)

#include "SC_PlugIn.hpp"
#include "KStrongDecayTanh.hpp"

static InterfaceTable* ft;

namespace KStrongDecayTanh {

KStrongDecayTanh::KStrongDecayTanh() {
    mCalcFunc = make_calc_function<KStrongDecayTanh, &KStrongDecayTanh::next>();
    next(1);
}

void KStrongDecayTanh::next(int nSamples) {
    const float* input = in(0);
    const float* gain = in(1);
    float* outbuf = out(0);

    // simple gain function
    for (int i = 0; i < nSamples; ++i) {
        outbuf[i] = input[i] * gain[i];
    }
}

} // namespace KStrongDecayTanh

PluginLoad(KStrongDecayTanhUGens) {
    // Plugin magic
    ft = inTable;
    registerUnit<KStrongDecayTanh::KStrongDecayTanh>(ft, "KStrongDecayTanh", false);
}

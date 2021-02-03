// PluginKStrongDecayTanh.hpp
// Aleksandar Koruga (aleksandar.koruga@gmail.com)

#pragma once

#include "SC_PlugIn.hpp"

namespace KStrongDecayTanh {

class KStrongDecayTanh : public SCUnit {
public:
    KStrongDecayTanh();

    // Destructor
    // ~KStrongDecayTanh();

private:
    // Calc function
    void next(int nSamples);

    // Member variables
};

} // namespace KStrongDecayTanh

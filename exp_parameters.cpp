// File   exp_parameters.cpp
// Author lidongming
// Brief

#include "exp_parameters.h"

namespace prediction {

void Parameters::dump()
{
    // LOG_INFO("----PARAMS----");
    for (const auto kv : _params) {
        // LOG_INFO("params key = %s,value = %s,type = %s", kv.first.c_str(), kv.second.c_str(),
            // _params_source[kv.first].c_str());
    }
    // LOG_INFO("---PARAMS----");
}

}


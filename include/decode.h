#pragma once
#include "common.h"
#include "fifo.h"

namespace pipeline {

    typedef struct fetch_decode_op_info_t {
        uint32_t pc;
        uint32_t val;
        bool enable;
    }op_info;

    class decode {
        private:

    };
}
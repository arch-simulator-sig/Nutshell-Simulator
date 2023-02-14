#pragma once
#include "common.h"

//TODO:implent basic sync fifo
namespace component {
    template<typename T>
    class fifo
    {
        protected:
            T *buffer;
            uint32_t size;
            uint32_t wptr;
            uint32_t rptr;
            bool wen;
            bool ren;

        public:
            fifo(uint32_t size);
            ~fifo();
            bool push(T element);
            bool pop(T element);
            bool is_empty();
            bool is_full();
    };
}
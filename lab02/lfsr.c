#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    // 0th, 2th, 3th, 5th xor to right-shifted 15th
    uint16_t x = *reg;
    uint16_t v = ((x & (1 << 0)) >> 0) ^
                 ((x & (1 << 2)) >> 2) ^
                 ((x & (1 << 3)) >> 3) ^
                 ((x & (1 << 5)) >> 5);
    x >>= 1;
    x &= (~(1 << 15));
    x |= (v << 15);
    *reg = x;
}


#include <stdint.h>

static inline uintptr_t align_up(uintptr_t sz, size_t alignment)
{
    // aliment = 4 = 0b100; mask = 0b11
    // aliment = 7 = 0b111; mask = 0b110 = 6
    uintptr_t mask = alignment - 1;
    if ((alignment & mask) == 0) {  /* power of two? */
        return (sz & ~mask) + (((sz & mask) + mask) & alignment);       
    }
    // sz = 7 * k + r
    // (7 * k + r + 6) / 7 * 7
    // = ( k + (r+6) / 7)* 7
    // = 7 (k+1)
    return (((sz + mask) / alignment) * alignment);
}
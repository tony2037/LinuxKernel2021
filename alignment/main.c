#include <stdio.h>
#include "alignment.h"

int main() {
    const uintptr_t expect_1 = 120;
    const uintptr_t expect_2 = 124;
    const uintptr_t expect_3 = 124;
    const uintptr_t expect_4 = 124;
    if (expect_1 == align_up(120, 4) &&
        expect_2 == align_up(121, 4) &&
        expect_3 == align_up(122, 4) &&
        expect_4 == align_up(123, 4)) {
            printf("PASS\n");
        }
    else {
        printf("FAIL\n");
    }
}
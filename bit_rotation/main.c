#include <stdio.h>
#include "rotation.h"

DECLARE_ROTATE(64);
DECLARE_ROTATE(32);
DECLARE_ROTATE(16);
DECLARE_ROTATE(8);
int main() {
    const uint8_t expect_l = 0b00101110;
    const uint8_t expect_r = 0b00010111;
    uint8_t ans = rotl8(0b00010111, 1);
    if (expect_l == ans && expect_r == rotr8(ans, 1))
        printf("PASS\n");
    else
        printf("FAIL\n");
}
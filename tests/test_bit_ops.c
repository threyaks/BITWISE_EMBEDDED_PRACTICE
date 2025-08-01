#include <stdio.h>
#include "../include/bit_ops.h"

int main() {
    uint8_t value = 0b00001100;

    printf("Original value: 0x%02X\n", value);
    printf("Set bit 0     : 0x%02X\n", set_bit(value, 0));    // Expect 0x0D
    printf("Clear bit 3   : 0x%02X\n", clear_bit(value, 3));  // Expect 0x04
    printf("Toggle bit 2  : 0x%02X\n", toggle_bit(value, 2)); // Expect 0x08
    printf("Check bit 3   : %d\n", check_bit(value, 3));      // Expect 1

    return 0;
}

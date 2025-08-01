#include "bit_ops.h"

uint8_t set_bit(uint8_t value, uint8_t bit) {
    return value | (1 << bit);
}

uint8_t clear_bit(uint8_t value, uint8_t bit) {
    return value & ~(1 << bit);
}

uint8_t toggle_bit(uint8_t value, uint8_t bit) {
    return value ^ (1 << bit);
}

uint8_t check_bit(uint8_t value, uint8_t bit) {
    return (value >> bit) & 1;
}

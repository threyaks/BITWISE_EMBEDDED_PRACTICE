#ifndef BIT_OPS_H
#define BIT_OPS_H

#include <stdint.h>

uint8_t set_bit(uint8_t value, uint8_t bit);
uint8_t clear_bit(uint8_t value, uint8_t bit);
uint8_t toggle_bit(uint8_t value, uint8_t bit);
uint8_t check_bit(uint8_t value, uint8_t bit);

#endif // BIT_OPS_H

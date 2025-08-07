
#include <stdio.h>
#include <stdint.h>

// Function to count set bits using Brian Kernighan's Algorithm
int countSetBits(uint32_t n) {
    int count = 0;
    while (n) {
        n = n & (n - 1);  // Clear the least significant set bit
        count++;
    }
    return count;
}

int main() {
    uint32_t num;

    printf("Enter a non-negative integer: ");
    scanf("%u", &num);

    int res = countSetBits(num);
    printf("Number of set bits (1s): %d\n", res);

    return 0;
}

#include <stdio.h>
#include <stdint.h> // for fixed-width integers

//? letter "%u" stands for unsigned, which means the type can only store non-negative values (0 and up),
// with this one, there is no ability to use negative values
//? letter "%ld" stands for long int

// source: https://en.cppreference.com/c/types/integer

int main()
{
    int8_t a = 100;  // 8-bit integer; range: -128 to 127
    uint8_t ua = 87; // 1 byte; range: 0 to 255

    int16_t b = 30000;   // 16-bit integer; range: -32,768 to 32,767
    uint16_t ub = 18700; // 2 bytes; range: 0 to 65,535

    int32_t c = 2000000;   // 32-bit integer; range: -2,147,483,648 to 2,147,483,647
    uint32_t uc = 3245800; // 4 bytes; range: 0 to 4,294,967,295

    int64_t d = 9000000000;   // 64-bit integer; range: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    uint64_t ud = 7654890000; // 8 bytes; range: 0 to 18,446,744,073,709,551,615

    printf("%d, %d, %d, %ld\n%u, %u, %u, %lu", a, b, c, d, ua, ub, uc, ud);
    return 0;
};
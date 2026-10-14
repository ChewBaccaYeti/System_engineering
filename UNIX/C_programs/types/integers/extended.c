#include <stdio.h>
#include <stdint.h> // for fixed-width integers

int main()
{

    int normalInt = 100;
    float normalFloat = 10.00;
    double normalDouble = 3.14159265;

    short int small = -25;                               // smaller int (below zero 0)
    unsigned int count = 25;                             // only positive numbers
    long int big = 1234567890;                           // large int
    long long int large = 987654321234567890;            // very large int
    unsigned long long int huge = 18446744073709551615U; // very large, only positive
    long double precise = 3.141592653589793238L;         // extended precision

    printf("Normal int: %d\n", normalInt);
    printf("Normal double: %.2f\n", normalFloat);
    printf("Normal double: %lf\n", normalDouble);
    printf("Small: %hd\n", small);
    printf("Count: %u\n", count);
    printf("Big: %ld\n", big);
    printf("Large: %lld\n", large);
    printf("Huge: %llu\n", huge);
    printf("Precise: %Lf\n", precise);

    return 0;
};
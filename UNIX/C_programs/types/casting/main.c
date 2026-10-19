#include <stdio.h>

/*
    Byte and short values − They are promoted to int. (int)
    If one operand is a long − The entire expression is promoted to long. (long)
    If one operand is a float − The entire expression is promoted to float. (float)
    If any of the operands is double − The result is promoted to double. (double)
*/

int example_1()
{
    // Example #1
    int sum = 17, count = 5;
    double mean, deal;

    mean = sum / count;         // implicit
    deal = (double)sum / count; // explicit typecast of type

    printf("Value of mean: %f\n", mean); // 3.000000
    printf("Value of mean: %f\n", deal); // 3.400000

    return 0;
};

int example_2()
{
    // Example #2
    int i = 16;
    char c = 'c'; // ascii value is 99
    float sum;

    sum = i + c;                         // converting int and char to float
    printf("Value of sum: %.2f\n", sum); // sum of int i = 16 and ascii value of char 'c' = 115.00

    return 0;
};

int main()
{
    example_1();
    example_2();
    return 0;
};
#include <stdio.h>

/*
    Byte and short values − They are promoted to int. (int)
    If one operand is a long − The entire expression is promoted to long. (long)
    If one operand is a float − The entire expression is promoted to float. (float)
    If any of the operands is double − The result is promoted to double. (double)
*/

int example_1()
{
    int sum = 17, count = 5;
    double mean, deal;

    mean = sum / count;         // implicit (automatically, usually human-being does not have to write this)
    deal = (double)sum / count; // explicit typecast of type

    printf("Value of mean: %f\n", mean); // 3.000000
    printf("Value of mean: %f\n", deal); // 3.400000

    return 0;
};

int example_2()
{
    int i = 16;
    char c = 'c'; // ascii value is 99
    float sum;

    sum = i + c;                         // converting int and char to float
    printf("Value of sum: %.2f\n", sum); // sum of int i = 16 and ascii value of char 'c' = 115.00

    return 0;
};

int example_3()
{
    // Automatic conversion: int to float
    float myFloat = 9;
    printf("%f\n", myFloat); // 9.000000

    // Automatic conversion: float to int
    int myInt = 9.99;
    printf("%d\n", myInt); // 9

    float sum = 5 / 2;
    printf("%f\n", sum); // 2.000000

    // Manual conversion: int to float
    float num = (float)5 / 2;
    printf("%f\n", num); // 2.500000

    return 0;
};

int example_4()
{
    int maxScore = 500;
    int userScore = 423;

    float percentage = (float)userScore / maxScore * 100;
    printf("Player's score percentage is: %.2f\n", percentage);
    return 0;
};

int main()
{
    example_1();
    example_2();
    example_3();
    example_4();
    return 0;
};
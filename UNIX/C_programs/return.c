#include <stdio.h>
#include <stdbool.h>

bool ageCheck(int age)
{
    if (age >= 18)
    {
        return true;
    }
    else
    {
        return false;
    }
};

double forth_grd(double num)
{
    return (num * num) * (num * num);
};

float cube(float num)
{
    return (num * num) * num;
};

int square(int num)
{
    return num * num;
};

int main()
{

    int x = square(2);
    int y = square(3);
    int z = square(4);

    float q = cube(5.1);
    float w = cube(6.2);
    float e = cube(7.3);

    double j = forth_grd(8.45);
    double k = forth_grd(9.67);
    double l = forth_grd(10.89);

    int age = 0;

    printf("Please, enter your age: ");
    scanf("%d", &age);

    if (ageCheck(age))
    {
        printf("You may sign up.\n");
    }
    else
    {
        printf("You must be 18+ to sign up.\n");
    }

    printf("X: %d\n", x);
    printf("Y: %d\n", y);
    printf("Z: %d\n", z);

    printf("\n");

    printf("Q: %f\n", q);
    printf("W: %f\n", w);
    printf("E: %f\n", e);

    printf("\n");

    printf("J: %lf\n", j);
    printf("K: %lf\n", k);
    printf("L: %lf\n", l);

    return 0;
};
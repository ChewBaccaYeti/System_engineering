#include <stdio.h>

int add(int x, int y)
{
    int result = x + y;
    return result;
};

int substract(int x, int y)
{
    return x - y;
};

int main()
{
    int x = 0;
    int y = 0;

    printf("Enter numbers: ");
    scanf("%d%d", &x, &y);

    int result_add = add(x, y);
    int result_substract = substract(x, y);
    printf("%d\n%d\n", result_add, result_substract);
    return 0;
};
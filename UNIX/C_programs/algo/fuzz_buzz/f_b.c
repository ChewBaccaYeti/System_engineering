#include <stdio.h>

void f_b(int n)
{
    int a = 0, b = 0, i;
    for (i = 1; i <= n; a++, b++, i++)
    {
        printf("%d", i);

        if (a == 3)
        {
            printf(" f");
            a = 0;
        }
        else if (b == 5)
        {
            printf(" b");
            b = 0;
        }
        printf("\n");
    }
};

int main()
{

    int n = 100;
    f_b(n);
    return 0;
};
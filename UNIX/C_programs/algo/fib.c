#include <stdio.h>

int main(void)
{
    int x = 0, y = 1, z;

    while (x < 255)
    {
        printf("%d\n", x);

        z = x + y;
        x = y;
        y = z;
    }
}
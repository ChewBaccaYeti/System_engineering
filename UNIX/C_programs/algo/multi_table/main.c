#include <stdio.h>

int main()
{

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    printf("\n");

    int num, multiplier, i;

    printf("Enter integer: ");
    scanf("%d", &num);
    printf("Enter multiplier: ");
    scanf("%d", &multiplier);

    for (i = 1; i <= multiplier; i++)
    {
        printf("%d * %d = %d \n", num, i, num * i);
    }

    return 0;
};
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int temp = 15;
    bool isSunny = false;

    // printf("Enter your temperature: ");
    // scanf("%d", temp);

    if (temp > 0 && temp < 30)
    {
        printf("Temperature is GOOD.\n");
    }
    else
    {
        printf("Temperature os BAD.");
    }

    if (temp > 0 || temp < 30)
    {
        printf("Temperature is GOOD.\n");
    }
    else
    {
        printf("Temperature os BAD.");
    }

    if (!isSunny)
    {
        printf("It is SUNNY outside!");
    }
    else
    {
        printf("It is CLOUDY outside.");
    }

    return 0;
};
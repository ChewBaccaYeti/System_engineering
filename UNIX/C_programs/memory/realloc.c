#include <stdio.h>
#include <stdlib.h>

//? realloc() - reallocation, resize previously allocated memory,
// realloc(ponter*, bytes);

int main()
{
    int number = 0;
    printf("Enter a # of prices: ");
    scanf("%d", &number);

    float *prices = (float *)malloc(number * sizeof(float));

    if (prices == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    for (int i = 0; i < number; i++)
    {
        printf("Enter price #%d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    int newNumber = 0;
    printf("Enter a new # of prices: ");
    scanf("%d", &newNumber);

    float *temp = (float *)realloc(prices, newNumber * sizeof(float)); // temporaly use
    // realloc() also will free() old memory

    if (temp == NULL)
    {
        printf("Could not allocate memory!\n");
        return 1;
    }
    else
    {
        prices = temp;
        temp = NULL;

        for (int i = number; i < newNumber; i++)
        {
            printf("Enter price #%d: ", i + 1);
            scanf("%f", &prices[i]);
        }

        for (int i = 0; i < newNumber; i++)
        {
            printf("$%.2f ", prices[i]);
        }
    }

    free(prices);
    prices == NULL; // no-used because of statement above, there is already logic to free memory, so memory with this one here freed twice

    return 0;
};
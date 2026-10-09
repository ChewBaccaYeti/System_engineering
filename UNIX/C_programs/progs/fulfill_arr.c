#include <stdio.h>

int main()
{

    int scores[5] = {0};
    int size = sizeof(scores) / sizeof(scores[0]);

    for (int i = 0; i < size; i++)
    {
        // printf("%d ", scores[i]);
        printf("Enter a score: ");
        scanf("%d", &scores[0]);
    }
    return 0;
};
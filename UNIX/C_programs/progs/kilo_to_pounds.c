#include <stdio.h>

int main()
{
    int choice = 0;
    float kilograms = 0.0f;
    float pounds = 0.0f;
    float diff = 2.20462;

    printf("==+== Weight Conversion Calculator ==+==\n");
    printf("1) Kilograms to pounds\n");
    printf("2) Pounds to kilograms\n");
    printf("Enter your choice (1, 2): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter the kilograms value: ");
        scanf("%f", &kilograms);
        pounds = kilograms * diff;
        printf("%.2f of kilograms is equal to %.2f of pounds\n", kilograms, pounds);
    }
    else if (choice == 2)
    {
        printf("Enter the pounds value: ");
        scanf("%f", &pounds);
        kilograms = pounds / diff;
        printf("%.2f of pounds is equal to %.2f of kilograms\n", pounds, kilograms);
    }
    else
    {
        printf("Invalid choice.\n Please enter 1 or 2.\n");
    }

    return 0;
};
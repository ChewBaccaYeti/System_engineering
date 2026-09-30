#include <stdio.h>

int main()
{
    char choice = '\0';
    float celsius = 0.0f;
    float fahrenheit = 0.0;

    printf("==+== Temperature Conversion Calculator ==+==\n");
    printf("C. celsius to fahrenheit\n");
    printf("F. fahrenheit to celsius\n");
    printf("Enter your choice (C, F): ");
    scanf("%c", &choice);

    if (choice == 'C')
    {
        printf("Enter the celsius value: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32; // C to F
        printf("%.1f of celsius is equal to %.1f of fahrenheit\n", celsius, fahrenheit);
    }
    else if (choice == 'F')
    {
        printf("Enter the fahrenheit value: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.1f of fahrenheit is equal to %.1f of celsius\n", fahrenheit, celsius);
    }
    else
    {
        printf("Invalid choice.\n Please enter C or F.\n");
    }

    return 0;
};
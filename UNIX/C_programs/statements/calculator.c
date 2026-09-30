#include <stdio.h>
#include <math.h>

int main(void)
{
    char math_operator = '\0';
    double num1 = 0;
    double num2 = 0;
    double result = 0;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the math operator (+ - * /): ");
    scanf(" %c", &math_operator); // whitespace to clear input buffer

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (math_operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0)
        {
            printf("You can't divide by zero!\n");
        }
        else
        {
            result = num1 / num2;
        }
        break;
    default:
        printf("Invalid operator.\n");
    }
    printf("Result: %.5lf\n", result);

    return 0;
};
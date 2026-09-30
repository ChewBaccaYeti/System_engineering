#include <stdio.h>
#include <stdbool.h>

int main()
{
    float price = 10.00;
    int age = 0;
    bool isStudent = false; // 10%
    bool isSenior = false;  // 20%

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 18)
    {
        isStudent = true;
    }
    if (age >= 65)
    {
        isSenior = true;
    }

    if (isStudent && isSenior) {
        printf("You get a student and senior discount of 30 percent\n");
        price *= 0.7;
    }
    else if (isStudent)
    {
        printf("You get a student discount of 10 percents \n");
        price *= 0.9;
    }
    else if (isSenior)
    {
        printf("You get a senior discount of 20 percents \n");
        price *= 0.8;
    }

    printf("The price of the ticket is: $%.2f\n", price);
    return 0;
};
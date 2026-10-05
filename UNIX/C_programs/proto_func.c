#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void helloWorld(char name[20], int age); // function prototype declaration
bool ageCheck(int age);                  // also proto decl

int main()
{
    int age = 0;
    char name[20] = "";

    printf("Please, enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // here to remove new line character(enter/whitespace before '!' sign)
    printf("Please, enter your age: ");
    scanf("%d", &age);

    helloWorld(name, age); // proto call

    if (ageCheck(age))
    {
        printf("You CAN cook at the Krusty Krab.\n");
    }
    else
    {
        printf("You must be 16+ to work at the Krusty Krab.\n");
    }
    return 0;
};

void helloWorld(char name[20], int age) // prototype definition
{
    printf("Hello %s!\n", name);
    printf("You are %d years old!\n", age);
};

bool ageCheck(int age)
{
    // if (age >= 16)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
    return age >= 16; // optimized!
};
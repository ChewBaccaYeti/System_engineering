#include <stdio.h>

/*
    ? pointer = is a variable that stores the memory address to another variable.
    Benefit: they help avoid wasting memory by allowing you to pass the address to the large data structure instead of copying the entire data.

*/
void birthday(int *age);

int main()
{
    int age = 25;
    int *pAge = &age; // pointer

    printf("%p\n", &age); // same addresses for both vars
    printf("%p\n", pAge);

    birthday(pAge);

    printf("You are %d years old!", age);

    return 0;
};

void birthday(int *age)
{
    // pass by reference
    (*age)++; // without () I will increment my memory address, not a value of pointed variable.
}
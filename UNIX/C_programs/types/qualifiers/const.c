#include <stdio.h>

// values of const can not be modified at all
int main()
{
    const int MAX_SIZE = 100;
    printf("Print max size value: %d", MAX_SIZE);

    MAX_SIZE = 200; //  ERROR: expression must be a modifiable lvalue

    return 0;
};
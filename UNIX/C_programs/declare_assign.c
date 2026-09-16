#include <stdio.h>

int decl_assi(void) {

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0'; // \0 is a null terminator
    char name[8] = "Venedykt"; // 8 stand for count of bytes
    double pi = 3.1415926535897932384626433;

    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);
    printf("%lf\n", pi);

    return 0;
};

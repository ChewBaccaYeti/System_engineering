#include <stdio.h>
#include <stdio.h>
int main(void) {

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0'; // \0 is a null terminator
    char name[8] = ""; // 8 stands for count of bytes
    double pi = 0.000; // 3.1415926535897932384626433;

    printf("Enter your age: ");
    scanf("%d", &age); // allow user put the value through terminal

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade); // add whitespace to clear input buffer for new line

    getchar(); // stands for complexity below, to clear input buffer as well
    printf("Enter your full name: ");
    // fgets(name, 8, stdin); // stands for - file_get_string
    fgets(name, sizeof(name), stdin); // sizeof(var) stands for bytes calculation
    name[strlen(name) - 1]  = '\0'; // strlen stands for string length, and here removes new line character

    printf("%d\n", age);
    printf("%.2f\n", gpa); // .2f for scanf limit, otherwise it will show long number with zeros
    printf("%c\n", grade);
    printf("%s\n", name);
    printf("%lf\n", pi);

    return 0;
};

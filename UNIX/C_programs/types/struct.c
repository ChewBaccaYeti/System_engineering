#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;

//? this plain declaration of struct, meanwhile, Student above is declared as typedef struct
struct Example
{
    char string[20];
    char symbol[1];
    int num;
    float floating;
    double large;
    bool choice;
};

void printStudent(Student student); // prototype

int main()
{

    Student happy = {
        "SpongeBob",
        30,
        4.5,
        true,
    };
    Student lazy = {
        "Patrick",
        36,
        1.8,
        false,
    };
    Student grumpy = {
        "Squidward",
        45,
        5.6,
        true,
    };

    // if struct is not defined as typedef, I must use struct keyword everytime.
    struct Example example = {
        "Some text in this string.",
        '$',
        8,
        5.4,
        3.1415926535897932384626433,
        true,
    };

    printf("%s\n", happy.name);
    printf("%d\n", happy.age);
    printf("%.1f\n", happy.gpa);
    printf("%d : %s\n", happy.isFullTime, (happy.isFullTime) ? "Yes" : "No"); // true == 1; false == 2;

    printf("%s\n", lazy.name);
    printf("%d\n", lazy.age);
    printf("%.1f\n", lazy.gpa);
    printf("%d : %s\n", lazy.isFullTime, (lazy.isFullTime) ? "Yes" : "No");

    printf("%s\n", grumpy.name);
    printf("%d\n", grumpy.age);
    printf("%.1f\n", grumpy.gpa);
    printf("%d : %s\n", grumpy.isFullTime, (grumpy.isFullTime) ? "Yes" : "No");

    Student zero = {0};        //? clearing memory , in case if there no variable to display anymore. In that case every value == will be == equal to == 0 zero
    strcpy(zero.name, "Zero"); // assigning values to zero struct
    zero.age = 10101;
    zero.gpa = 101.010;
    zero.isFullTime = false;
    printStudent(zero); // function invocation for the Zero

    return 0;
};

void printStudent(Student student)
{
    printf("\nName: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.1f\n", student.gpa);
    printf("Full-time: %d : %s\n", student.isFullTime, (student.isFullTime) ? "Yes" : "ZERO*NULL");
};
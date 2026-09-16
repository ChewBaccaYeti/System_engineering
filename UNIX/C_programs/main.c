#include <stdio.h>
#include <stdbool.h>

int main() {
    int age = 29; // %d , 4 bytes
    int year = 2026;

    int num = 0;
    int num_1 = 1;
    int num_2 = 10;
    int num_3 = 100;

    int x = 7;
    int y = 3;
    float z = 0;
    // z = x + y;
    // z = x - y;
    // z = x * y;
    // z = x / y;
    z = x % y;

    // x+=2;
    // x-=2;
    // x/=3;
    x*=4;

    float coordinate = 49.6; // %f , 4 bytes
    float price = 19.99;

    double pi = 3.1415926535897932384626433; // %lf , 8 bytes

    char grade = 'A'; // %c , 1 byte
    char symbol = '!';
    char currency = '$';

    char name[] = "Venedykt"; // %s , bytes sizes varies/depends on value its contain
    char email[] = "fake123@gmail.com";

    // library required , 1 byte
    bool isOnline = true; // or 1===true
    bool isPlaying = false; // or 0===false

    printf("You are %d years old!\n", age); // d stand for decimal -> int, since I using number type(integer)
    printf("The year is %d.\n", year);

    printf("This is an int with zero spaces:%d\n", num);
    printf("This is an int with one spaces:%1d\n", num_1);
    printf("This is an int with two spaces:%2d\n", num_2);
    printf("This is an int with three spaces:%3d\n", num_3);
    printf("This is an int with one plus:%+1d\n", num_1);
    printf("This is an int with two minuses:%-2d\n", num_2);
    printf("This is an int with three zeros:%03d\n", num_3);

    printf("%.1f\n", z);
    printf("%d\n", x);

    printf("Coordinate is %f\n", coordinate); // 49.599998
    printf("Rounded Coordinate is %.1f\n", coordinate); // 49.6

    printf("Your price is %f\n", price); // 19.990000
    printf("Your rounded price is %+3.1f\n", price); // 20
    printf("Your precise price is %4.2f\n", price); // 19.99

    printf("Pi integer is %lf\n", pi); // 3.141593
    printf("Pi long integer is %.16lf\n", pi); // 3.1415926535897931

    printf("Your grade is %c and currency is %c%c\nGood job Mr.%s%c\nNow check your E-mail: %s\n", grade, currency, symbol, name, symbol, email);

    if(isOnline) {
        printf("You ARE online%c\n", symbol);
    } else if(!isOnline) {
        printf("You ARE NOT online%c\n", symbol);
    } else if(!isPlaying) {
        printf("You ARE playing%c\n", symbol);
    } else if(isPlaying) {
        printf("You ARE NOT playing%c\n", symbol);
    } else {
        printf("Nothing to report.");
    };

    return 0;
};

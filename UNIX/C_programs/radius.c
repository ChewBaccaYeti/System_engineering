#include <stdio.h>
#include <math.h>

//! Formulas - (https://www.geeksforgeeks.org/maths/area-formulas/)
//? geometricall values of Sphere(circle)

int main()
{

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2); // formula to find area - Area of Circle - Area = πr2
    printf("Area: %.2lf\n", area);

    surfaceArea = (4 * PI) * pow(radius, 2); // surface Area formula for Area of Sphere(circle) = 4πr2
    printf("Surface Area: %.2lf\n", surfaceArea);

    volume = (4 / 3) * (PI * pow(radius, 2)); // Volume of Sphere(circle) = 4/3πr3
    printf("Volume: %.2lf\n", volume);

    return 0;
};
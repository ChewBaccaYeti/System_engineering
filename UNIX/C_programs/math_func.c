#include <stdio.h>
#include <math.h>

int main() {

    float x = 4.67;
    float y = 2.45;
    float z = 6.67;
    float q = 5.78;
    float w = 2.86;

    x = sqrt(x); // 2.161018
    y = pow(y, 4); // 36.030010
    z = round(z); //7
    q = ceil(q); // 6
    w = floor(w); // 2

    printf("%f\n%f\n%.1f\n%.1f\n%.1f\n", x, y, z, q, w);

    return 0;
};
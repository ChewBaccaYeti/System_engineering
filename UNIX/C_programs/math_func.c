#include <stdio.h>
#include <math.h> // for math methods
#include <complex.h> // for ctanf method

int main() {

    float x = 4.67;
    float y = 2.45;
    float z = 6.67;
    float q = 5.78;
    float w = 2.86;
    float t = 7.59;
    float f = 8.47;

    float i = 45;
    float o = 90;
    float v = 180;
    double j = 360;

    float r = o;

    double pi = 3.1415926535897932384626433;

    x = sqrt(x); // 2.161018
    y = pow(y, 4); // 36.030010
    z = round(z); // 7
    q = ceil(q); // 6
    w = floor(w); // 2
    t = abs(t); // 7.6
    f = log(f); // 2.1

    i = sin(i); // 2.161018
    o = cos(o); // -0.448074
    v = tan(v); // 1.338690

    float L = (2 * pi) * r; // TODO: needs clarification // = 565.486694

    printf("%f\n%f\n%.1f\n%.1f\n%.1f\n%.1f\n%.1f\n%f\n%f\n%f\n", x, y, z, q, w, t, f, i, o, v);
    printf("%f\n", L);

    return 0;
};
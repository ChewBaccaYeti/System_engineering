#include <stdio.h>
#include <math.h>

int main()
{

    // A=P×(1+n/r​)nt
    //?
    /*
        A - is total amount;
        P - is principal amount;
        r - is annual interest rate;
        n - is the number of times interest is compounded per year;
        t - is the number of years the money is invested or borrowed;
    */

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("Compound Principal Calculator\n");

    printf("Enter the Principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate % (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the # of years (t): ");
    scanf("%d", &years);

    printf("Enter the # of times compounded per year (n): ");
    scanf("%d", &timesCompounded);

    total = principal * pow(1 + rate / timesCompounded, (timesCompounded * years));
    printf("After %d years, total amount is: $%lf\n", years, total);

    return 0;
};
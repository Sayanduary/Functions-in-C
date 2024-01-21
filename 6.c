#include <stdio.h>
#include <math.h>

double compound_interest(double principal, double rate, int years)
{
    return principal * pow((1 + rate / 100), years);
}

int main()
{
    double principal, rate, amount;
    int years;

    printf("Enter principal: ");
    scanf("%lf", &principal);

    printf("Enter rate of interest: ");
    scanf("%lf", &rate);

    printf("Enter number of years: ");
    scanf("%d", &years);

    amount = compound_interest(principal, rate, years);

    printf("Compound Interest is: %.2lf", amount);

    return 0;
}
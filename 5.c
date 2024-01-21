#include <stdio.h>

double factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

double sum_of_series(int n)
{
    double sum = 0.0;
    for (int i = 1; i <= n; i++)
    {
        sum += 1 / factorial(i);
    }
    return sum;
}

int main()
{
    int num;
    double sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    sum = sum_of_series(num);

    printf("Sum of series up to %d is: %.2lf", num, sum);

    return 0;
}
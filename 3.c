#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    long long fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    fact = factorial(num);

    printf("Factorial of %d is: %lld", num, fact);

    return 0;
}
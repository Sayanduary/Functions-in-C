#include <stdio.h>
long long power(int x, int y) {
    if(y == 0)
        return 1;
    else
        return x * power(x, y - 1);
}

int main() {
    int base, exponent;
    long long result;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    result = power(base, exponent);

    printf("%d to the power of %d is: %lld", base, exponent, result);

    return 0;
}
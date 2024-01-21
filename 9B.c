#include <stdio.h>

long long power(int x, int y) {
    long long result = 1;
    for(int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
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
#include <stdio.h>

int findMax(int num1, int num2, int num3) {
    int max;

    if(num1 > num2 && num1 > num3)
        max = num1;
    else if(num2 > num1 && num2 > num3)
        max = num2;
    else
        max = num3;

    return max;
}

int main() {
    int num1, num2, num3, max;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    max = findMax(num1, num2, num3);

    printf("The largest number is: %d", max);

    return 0;
}
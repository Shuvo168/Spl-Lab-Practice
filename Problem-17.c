// Write a C program to find the summation of digits of a given number.

#include <stdio.h>
int main()
{
    int num, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);

    return 0;
}

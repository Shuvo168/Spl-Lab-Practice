// Write a C program to print the digits of a number.

#include <stdio.h>
int main()
{
    int num, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits of the number: ");
    while (num > 0)
    {
        digit = num % 10;
        printf("%d ", digit);
        num /= 10;
    }

    return 0;
}

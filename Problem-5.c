// Write a C program to swap two numbers without using a third variable.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swaping: a= %d and b= %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swaping: a= %d and b= %d", a, b);

    return 0;
}

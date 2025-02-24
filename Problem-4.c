// Write a C program to swap two numbers using a third variable.

#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swaping: a= %d and b= %d\n", a, b);

    temp = b;
    b = a;
    a = temp;

    printf("After swaping: a= %d and b= %d", a, b);

    return 0;
}

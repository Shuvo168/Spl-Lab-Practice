// Write a C program to find the print first n Fibonacci Number.

#include <stdio.h>
int main()
{
    int num, first = 0, second = 1, next, i;
    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &num);

    printf("First 5 Fibonacci numbers: %d %d ", first, second);
    for (i = 3; i <= num; i++)
    {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }

    return 0;
}

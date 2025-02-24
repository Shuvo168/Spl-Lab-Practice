// Write a C program to find the summation of even numbers from 1 to n.

#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &num);

    for (i = 2; i <= num; i += 2)
    {
        sum += i;
    }
    printf("Sum of even numbers from 1 to %d is: %d\n", num, sum);

    return 0;
}

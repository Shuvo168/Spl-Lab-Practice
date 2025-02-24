// Write a c program to print the Square star pattern.

#include <stdio.h>
int main()
{
    int num, i, j;
    printf("Enter the size of the square: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

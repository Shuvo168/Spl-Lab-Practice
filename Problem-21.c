// Write a C program to display the Right Triangle Star pattern.

#include <stdio.h>
int main()
{
    int num, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

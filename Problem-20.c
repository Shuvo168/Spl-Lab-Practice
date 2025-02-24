// Write a C program to display the pyramid pattern.

#include <stdio.h>
int main()
{
    int num, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

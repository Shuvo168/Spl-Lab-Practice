// Write a C program to find the sum of the following series
//		S = 1 + 1/2^2 + 1/3^3 + … … + 1/n^n


#include <stdio.h>
#include <math.h>
int main()
{
    int num, i;
    double sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        sum += 1 / pow(i, i);
    }
    printf("Sum of the series up to %d terms is: %.3lf\n", num, sum);

    return 0;
}

// Write a C program to find whether a year is a leap year or not.

#include <stdio.h>
int main()
{
    int year;
    printf("Enter a Year: ");
    scanf("%d", &year);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is Not a leap year.\n", year);
    }

    return 0;
}

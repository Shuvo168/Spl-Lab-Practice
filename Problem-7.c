// Write a C program to find a triangle is equilateral, isosceles or scalene.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b)
    {
        if (a == b && b == c)
        {
            printf("The triangle is Equilateral.\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("The triangle is Isosceles.\n");
        }
        else
        {
            printf("The triangle is Scalene.\n");
        }
    }
    else
    {
        printf("It cannot form a triangle.");
    }

    return 0;
}

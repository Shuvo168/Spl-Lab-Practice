// Write a C program to find the area and perimeter of a triangle.

#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, perimeter, semiperimeter, area;
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b)
    {
        perimeter = a + b + c;
        semiperimeter = perimeter / 2;
        area = sqrt(semiperimeter * (semiperimeter - a) * (semiperimeter - b) * (semiperimeter - c));
        printf("Perimeter of the triangle: %d \n", perimeter);
        printf("Area of the triangle: %d", area);
    }
    else
    {
        printf("Invalid triangle!");
    }

    return 0;
}
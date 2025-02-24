// Write a C program to find if a triangle is a Right triangle or not.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
    {
        printf("The triangle is a Right triangle.\n");
    }
    else
    {
        printf("The triangle is NOT a Right triangle.\n");
    }

    return 0;
}

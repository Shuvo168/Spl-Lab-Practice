// Write a C program to find the area and perimeter of a rectangle.

#include <stdio.h>
int main()
{
    int length, width, perimeter, area;
    printf("Enter the length and width of the rectangle: ");
    scanf("%d %d", &length, &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area of the rectangle: %d \n", area);
    printf("Perimeter of the rectangle: %d", perimeter);

    return 0;
}

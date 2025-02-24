// Write a C program to convert the given temperature in Fahrenheit to Celsius.

#include <stdio.h>
int main()
{
    double fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    celsius = 5 * (fahrenheit - 32) / 9;
    printf("Temperature in Celsius: %.2lf", celsius);

    return 0;
}

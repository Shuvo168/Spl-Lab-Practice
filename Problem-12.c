// Write a C program to find all possible roots of a quadratic equation.

#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, discriment, root1, root2, realpart, imagpart;
    printf("Enter coefficients of x, y and constant: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriment = b * b - 4 * a * c;

    if (discriment > 0)
    {
        root1 = (-b + sqrt(discriment)) / (2 * a);
        root2 = (-b - sqrt(discriment)) / (2 * a);
        printf("Roots are real and different: %.2lf and %.2lf\n", root1, root2);
    }
    else if (discriment == 0)
    {
        root1 = root2 = (-b) / (2 * a);
        printf("Roots are real and same: %.2lf\n", root1);
    }
    else
    {
        realpart = (-b) / (2 * a);
        imagpart = (sqrt(-discriment)) / (2 * a);
        printf("Roots are complex: %.2lf+%.2lfi and %.2lf-%.2lfi \n", realpart, imagpart, realpart, imagpart);
    }

    return 0;
}

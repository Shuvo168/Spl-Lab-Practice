// Write a C program to find the largest among three numbers.

int main()
{
    int a, b, c;
    printf("Enter three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d is the Largest Number\n", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the Largest Number\n", b);
    }
    else
    {
        printf("%d is the Largest Number\n", c);
    }

    return 0;
}

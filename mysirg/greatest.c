// Program to find greatest of three numbers.
#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers=");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("A is the greatest number %d", a);
    }
    else if (b > a && b > c)
    {
        printf("B is the greatest number %d", b);
    }
    else if (c > b && c > a)
    {
        printf("C is the greatest number %d", c);
    }

    else if (a == b == c)
    {
        printf("All numbers are same %d%d%d", a, b, c);
    }

    return 0;
    getch();
}
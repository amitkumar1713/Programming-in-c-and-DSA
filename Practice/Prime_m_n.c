#include <stdio.h>
#include <conio.h>

int main()
{
    int m, n, i, j;
    printf("Enter two numbers to find the prime numbers between them=");
    scanf("%d%d", &m, &n);
    for (i > m; i < n; i++)
    {
        for (j = 2; j < n; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            printf("%d", i);
        }
    }

    return 0;
    getch();
}
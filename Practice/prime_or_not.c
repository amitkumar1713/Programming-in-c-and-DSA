// Prime or not using for loop.
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i;
    printf("Enter a number=");
    scanf("%d", &n);
    for (i = 2; i <= n-1; i++)
    {
        if (n % i== 0)
        {
            
            break;
        }
    }
    if (n==i)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a prime number");
    }
    

    return 0;
    getch();
}
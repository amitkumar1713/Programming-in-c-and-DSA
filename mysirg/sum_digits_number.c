#include <stdio.h>
#include <conio.h>

int main()
{
    int n, sum = 0,r;
    printf("Please enter a number to find sum of it's digits=");
    scanf("%d", &n);
    while ( n!=0)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    printf("Sum of digits=%d", sum);

    return 0;
    getch();
}
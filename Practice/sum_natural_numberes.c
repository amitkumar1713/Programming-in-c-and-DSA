//Program to find the sum of first ten  natural numbers using while loop.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n=10,i=1,sum=0;
    while (i<=n)
    {
        sum+=i;
        i++;
    }    
    printf("Sum is %d",sum);
    
    return 0;
    getch();
}
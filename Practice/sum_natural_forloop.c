//Program to find the sum of first 10 natural numbers using for loop.
#include<stdio.h>
#include<conio.h>

int main()
{
    int n=10,i,sum=0 ;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("The sum is %d",sum);
    return 0;
getch();
}
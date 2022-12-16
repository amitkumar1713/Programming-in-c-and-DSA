//Program to find factorial of given number using for loop.

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,fact=1 ;
    printf("Please enter a number to find the factorial=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("Factorial of a given number=%d",fact);
    return 0;
getch();
}
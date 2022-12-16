//Program to print product of first n natural numbers.
#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,product=1 ;
    printf("Enter the value of n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        product*=i;
    }
    printf("The sum of n natural number=%d",product);
    return 0;
getch();
}
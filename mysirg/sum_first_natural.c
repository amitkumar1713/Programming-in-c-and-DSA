//Program to print sum of first 10 natural numbers.
#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,sum=0 ;
    printf("Enter the value of n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("The sum of n natural number=%d",sum);
    return 0;
getch();
}
//Program to print fibonacci series..

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,a=-1,b=1,c ;
    printf("Please enter the term upto ehich you want to print the series=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       a=b;
       b=c;
       c=a+b;
       printf("%d\t",c);
    }
    return 0;
getch();
}
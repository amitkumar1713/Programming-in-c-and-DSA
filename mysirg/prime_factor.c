//Program to print prime factors of a given numbers.

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,j,k ;
    printf("Please enter the factor to get it's factors=");
    scanf("%d",&n);
    for(i=2;n>1;i++)
    {
        while(n%i==0)
        {
            n=n/i;
            printf("%d\t",i);
        }
    }
    return 0;
getch();
}
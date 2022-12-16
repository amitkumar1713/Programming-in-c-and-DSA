//Program to find the sum of first 10 natural numbers with the help of do-while loop.

#include<stdio.h>
#include<conio.h>

int main()
{
    int n=10,i=1,sum=0 ;
    do
    { 
        sum+=i;
        i++;
    }while(i<=n);
    printf("The sum is %d",sum);
    return 0;
getch();
}
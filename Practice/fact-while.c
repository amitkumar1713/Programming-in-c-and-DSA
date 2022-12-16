//Program to find factorial of given number using while loop.

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i=1,fact=1 ;
    printf("Please enter a number=");
    scanf("%d",&n);
    while(i<=n){
        fact*=i;
        i++;
    }
    printf("Factorial of the given number=%d",fact);
    return 0;
getch();
}


#include<stdio.h>
#include<conio.h>

int fac(int n);

int main()
{
    int n;
    printf("Enter the number to find factorial=");
    scanf("%d",&n);
    printf("The result is=%d",fac(n));
    return 0;
    getch();
}

int fac(int n)
{
    if (n==1)
    return(1);
    return(n*fac(n-1));
}
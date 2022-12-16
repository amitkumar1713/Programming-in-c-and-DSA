#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,fact=1 ;
    printf("Enter the number to find its factorial=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact*=i;
    }
    printf("Your answer is %d",fact);
    return 0;
getch();
}
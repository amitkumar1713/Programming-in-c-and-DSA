//Program to print factorial using function.

#include<stdio.h>
#include<conio.h>

int fact(int n);

int main()
{
    int n ;
    printf("Please enter a number=");
    scanf("%d",&n);
    printf("The factorial is=%d",fact(n));
    return 0;
getch();
}

int fact(int n){
    int prod=1;
    for(int i=n;i>=1;i--){
        prod*=i;
        
    }
    return prod;

    
}
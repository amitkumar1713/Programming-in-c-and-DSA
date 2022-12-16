//!Program to print the table of 5 using scanf.

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,m,table ;
    printf("Please enter the number to print the table=");
    scanf("%d",&n);
    printf("You want to print the multiplication table upto=");
    scanf("%d",&m);
    
    for ( int i = 1; i <=m; i++)
    {
        printf("Your desired table of %d*%d is :%d\n",n,i,n*i);
    }
    

    return 0;
getch();
}
//Program to find sum of the numbers occuring in the multiplication number of 8
#include<stdio.h>
#include<conio.h>

int main()
{
    int nn,n=10,i,sum=0 ;
    printf("Enter the number=");
    scanf("%d",&nn);
    
    for ( i =1; i <=n; i++)
    {
        sum+=i;
    }
    printf("sum is %d",sum*nn);
    
    return 0;
getch();
}
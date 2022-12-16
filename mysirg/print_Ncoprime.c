//Program to check for co-prime

#include<stdio.h>
#include<conio.h>

int main()
{
    int a=2,b,i,min;
    printf("Please enter  number=");
    scanf("%d",&b);
    min=(a>b)?a:b;
    for(i=2;i<=min;i++)
    {
        if(a%i==0&&b%i==0)
        {
            break;
        }

         

    }
    if(i==min+1)
    {
        printf("%d",i);
    }
    else
    {
        printf("Not a Co-prime number");
    }
    return 0;
getch();
}
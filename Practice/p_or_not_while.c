#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=2;
    printf("Enter a number=");
    scanf("%d",&n);
    while(i<=n-1)
    {
        
        if(n%i==0)
        {
            
            break;
        }
        i++;
    }
    if(n==i)
    {
        printf("prime number");

    }
    else
    {
        printf("Not a Prime number");
    }
    return 0;
    getch();

}
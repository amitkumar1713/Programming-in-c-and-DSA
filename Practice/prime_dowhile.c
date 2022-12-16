#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=2;
    printf("Enter the number=");
    scanf("%d",&n);
    do
    {
        if (n%i==0)
        {
            
            break;
        }
        i++;
        
    } while (i<=n-1);
    if(n==i)
    {
        printf(" prime number");
    }
    else
    {
        printf("Not a Prime number");
    }
    return 0;
    getch();
    
}
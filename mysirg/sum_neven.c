#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,sum=0 ;
    printf("Please enter the value of n=");
    scanf("%d",&n);
    for(i=2;i<=2*n;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }
    printf("The sum is %d",sum);
    return 0;
getch();
}
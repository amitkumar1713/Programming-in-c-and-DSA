#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i ;
    printf("Enter the place upto which you wish to get the even number=");
    scanf("%d",&n);
    for(i=2;i<=2*n;i++)
    {
        if(i%2==0)
        {
            printf("\t%d",i);
        }
    }
    return 0;
getch();
}
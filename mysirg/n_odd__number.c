#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i ;
    printf("Enter the place upto which you wish to get the odd number=");
    scanf("%d",&n);
    for(i=1;i<=(1*n)+(n-1);i++)
    {
        if(i%2!=0)
        {
            printf("\t%d",i);
        }
    }
    return 0;
getch();
}
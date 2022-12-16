#include<stdio.h>
#include<conio.h>

int main()
{
    int n,d,i ;
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!Table!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("Please enter the number and the digit upto which you want to print the table=");

    scanf("%d%d",&n,&d);
    for(i=1;i<=d;i++)
    {
        printf("The table of %d is%d*%d=%d\n",n,n,i,n*i);
    }

    return 0;
getch();
}
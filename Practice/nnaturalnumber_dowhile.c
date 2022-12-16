#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i=0 ;
    printf("Enter the number=");
    scanf("%d",&n);
    do
    {
        i++;
        printf("The n natural number are=%d\n",i);
    }while(i<n);
    return 0;
getch();
}
//Proggram to print natural number in reverese order.
#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i ;
    printf("Enter the number=");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        printf("Natural numbers are=%d\n",i);
    }
    return 0;
getch();
}
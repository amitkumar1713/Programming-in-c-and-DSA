#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i=0 ;
    printf("Please enter a number=");
    scanf("%d",&n);
    do
    {
        i++;
        printf("The numbers are=%d\n",i);

    } while (i<n);
    
    return 0;
getch();
}
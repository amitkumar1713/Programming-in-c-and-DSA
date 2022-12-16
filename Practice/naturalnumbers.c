#include<stdio.h>
#include<conio.h>

int main()
{
    int i ;
    printf("Enter a number=");
    scanf("%d",&i);
    while (i>=10 && i<=20)
    {
        printf("Natural numbers are %d\n",i);
        i=i+1;
    } 
    
    return 0;
getch();
}
#include<stdio.h>
#include<conio.h>

int sum(int a);

int main()
{
    int a;
    printf("Enter the number=");
    scanf("%d",&a);
    printf("The sum of first n natural number=%d",sum(a));
    return 0;
    getch();
}

int sum(int a)
{
    if(a==1)
    return(1);
    return(a+sum(a-1));

    
}
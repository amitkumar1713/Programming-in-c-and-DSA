#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i;
    printf("Enter the number to print its table=");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d\n",num*i);
    }
    return 0;
    getch();

}
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j ;
    for(j=1;j<=3;j++)
    {
    for(i=1;i<=5;i++)
    {
        if(i<=j+(j-1))
        printf("*");
        else
        {
            printf("");
        }
        
    }
    printf("\n");
    }
    return 0;
getch();
}
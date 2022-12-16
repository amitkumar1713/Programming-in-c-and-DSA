#include<stdio.h>
#include<conio.h>

int main()
{
    int tab[10] ;
    for(int i=0;i<10;i++)
    {
        tab[i]=5*(i+1);
    }
    for(int j=0;j<10;j++)
    {
        printf("5*%d=%d\n",j+1,tab[j]);
    }
    return 0;
getch();
}
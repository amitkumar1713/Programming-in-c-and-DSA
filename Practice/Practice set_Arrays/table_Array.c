//!Write a program to create multipplication table of 5 using arrays.

#include<stdio.h>
#include<conio.h>

int main()
{
    int tab[10] ;
    for ( int i = 0; i < 10; i++)
    {
        tab[i]=5*(i+1);
    }
    for ( int i = 0; i < 10; i++)
    {
        printf("5*%d=%d\n",i+1,tab[i]);
    }
    
    
    return 0;
getch();
}
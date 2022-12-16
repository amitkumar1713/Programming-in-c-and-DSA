#include<stdio.h>
#include<conio.h>

int main()
{
    int i[4]={1,2,3,4} ;
    
    int*p=&i[1];
    p++;
    printf("Value of p is %d",*p);

    return 0;
getch();
}

//program to print the address of a variable and then find the value of that variable using the addreass.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i=6 ;
    int *p=&i;
    printf("The addrss of i is %u\n",p);
    printf("The value of i is %d",*p);


    
    return 0;
getch();
}
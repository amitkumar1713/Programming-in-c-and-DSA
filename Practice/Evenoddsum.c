#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    
    int a,b,c,d,e,f,g;
    printf("Please enter a number=");
    scanf("%d", &a);
    b=a/1000; //first digit
    c=a/100;
    d=c%10;//second no
    e=a%100;
    f=e/10;//third number
    g=e%10;//fourth number
printf("\nthe first number=%d",b);
printf("\nthe second number=%d",d);
printf("\nthe third number=%d",f);
printf("\nthe fourth number=%d",g);


getch();
}

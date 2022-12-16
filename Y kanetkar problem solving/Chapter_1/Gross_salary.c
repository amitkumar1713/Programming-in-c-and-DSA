#include<stdio.h>
#include<conio.h>

int main()
{
    float s,da,ra,de,gs ;
    printf("Please enter your salary=");
    scanf("%f",&s);
    da=0.40*s;
    ra=0.20*s;
    de=da+ra;
    gs=s+de;
    printf("your gross salary is %f",gs);

    return 0;
getch();
}
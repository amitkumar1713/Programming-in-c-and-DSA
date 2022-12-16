// ?Program to convert any angle to all of the trigonometric ratios.

// !WE will take the value in degree and then we will put the radian value inside all of the trigo functions.

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float d,r,p=3.1415 ;
    printf("Please enter a angle=");
    scanf("%f",d);
    r=d*(p/180);
    printf("Your trigo ratios are:sin(%f)",sin(r));
    printf("Your trigo ratios are:cos(%f)",cos(r));
    printf("Your trigo ratios are:tan(%f)",tan(r));
    printf("Your trigo ratios are:cot(%f)",1/tan(r));
    printf("Your trigo ratios are:sec(%f)",1/cos(r));
    printf("Your trigo ratios are:cosec(%f)",1/sin(r));
    return 0;
getch();
}


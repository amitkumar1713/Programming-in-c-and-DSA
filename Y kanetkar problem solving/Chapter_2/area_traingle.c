// Program to find area of a traingle.

#include<stdio.h>
#include<conio.h>

int main()
{
    float b,h,area ;
    printf("Please enter  the breadth of the traingle=");
    scanf("%f",&b);
    printf("Please enter  the height of the traingle=");
    scanf("%f",&h);
    area=0.5*b*h;
    printf("Area of the traingle is=%f",area);
    
    return 0;
getch();
}
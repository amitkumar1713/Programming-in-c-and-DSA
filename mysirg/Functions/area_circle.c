//Program to print area of circle using functions.

#include<stdio.h>
#include<conio.h>

float arcirc(float r);

int main(){
    float r;
    printf("Please enter the radius to find the area of circle=");
    scanf("%f",&r);
    printf("Area of circle with the given radius is=%.2f",arcirc(r));

    return 0;
    getch();
}

float arcirc(float r){
    float pie=3.14;
    float area=pie*(r*r);
    return area;
}
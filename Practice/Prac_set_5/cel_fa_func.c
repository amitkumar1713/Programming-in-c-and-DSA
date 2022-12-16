/* Program to create a function which can perform the conversion of celsius to fahrenheit.*/
#include<stdio.h>
#include<conio.h>
float tempconverter( float c);
int main()
{
    float c ;
    printf("Please enter the temperature in celsius=");
    scanf("%f",&c);
    printf("The temperature in fahrenheit is %f",tempconverter(c));
    return 0;
getch();
}

float tempconverter(float c){
    float f;
   
    f=(c *1.8) + 32;
    return f;

}
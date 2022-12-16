#include<stdio.h>
#include<conio.h>
float average(float a,float b,float c);

int main()
{
    float a,b,c ;
    printf("Please enter first number=");
    scanf("%f",&a);
    printf("Please enter Second number=");
    scanf("%f",&b);
    printf("Please enter Third number=");
    scanf("%f",&c);
    printf("Your average is=%f",average(a,b,c));
    return 0;
getch();
}

float average(float a,float b,float c){
    float result;
    result=(a+b+c)/3;
    return result;
}
//Program to find greater between two numbers.
#include<stdio.h>
#include<conio.h>

int main()
{
    float a,b;
    printf("please enter two numbers=");
    scanf("%f%f",&a,&b);
    if (a>b)
    {
        printf("A is the greater number=%f",a);
    }
    else if(a==b)
    {
        printf("Both numbers are equal");

    }
    else
    {
        printf("B is the greater number=%f",b);
    }
}
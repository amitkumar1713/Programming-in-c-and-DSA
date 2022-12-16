#include <stdio.h>
#include <conio.h>

float average(float a,float b,float c);

int main()
{
    float n, n1, n2;
    printf("Please enter three number=");
    scanf("%f%f%f", &n, &n1, &n2);
    printf("The average of three number is %f",average(n,n1,n2));

    return average(n, n1, n2);
    getch();
}

float average(float a,float b,float c)
{
    float d;
    d = (a + b + c) / 2;
    return d;
}
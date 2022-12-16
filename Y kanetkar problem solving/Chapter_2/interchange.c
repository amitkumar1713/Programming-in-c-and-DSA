#include <stdio.h>
#include <conio.h>

int main()
{
    float c, d;
    printf("Enter two numbers to interchange=");
    scanf("%f%f", &c, &d);
    printf("Before interchange=%f,%f", c, d);
    c = c + d; //!c=1+2=3;\\\\\\\\\ d=3-2=1; \\\\\\\\\\ c=3-1=2; c=2,d=1
    d = c - d;
    c = c - d;

    printf("After interchange:%f,%f", c, d);

    return 0;
    getch();
}
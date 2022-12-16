#include<stdio.h>
#include<conio.h>

int main()
{
    float fa,c ;
    printf("Enter the temperarure to convert to celsius=");
    scanf("%f",&fa);
    c=(fa-32)*0.56;
    printf("your temp. in c is%f",c);
    return 0;
getch();
}
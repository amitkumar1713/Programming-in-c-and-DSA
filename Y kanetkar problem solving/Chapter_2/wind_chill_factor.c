#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float t,v,wcf ;
    printf("Please enter the temperature=");
    scanf("%f",&t);
    printf("Please enter the velocity=");
    scanf("%f",&v);
    wcf= 35.74 + 0.6215*t + ( 0.4275*t - 35.75 ) * pow(v,0.16);
    printf("The wind chill factor is :%f",wcf);


    
    return 0;
getch();
}
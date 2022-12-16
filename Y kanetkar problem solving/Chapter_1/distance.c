#include<stdio.h>
#include<conio.h>

int main()
{
    float d,m,inch,feet,cm ;
    printf("Please enter the distance in KM=");
    scanf("&f",&d);
    m=d*1000;
    inch=d*39370.0787;
    feet=d* 3280.84;
    cm=d*100000;
    printf("your distance in m is%f\n",m);
    printf("your distance in inch is%f\n",inch);
    printf("your distance in feet is %f\n",feet);
    printf("your distance in cm is%f\n",cm);

    
    return 0;
getch();
}
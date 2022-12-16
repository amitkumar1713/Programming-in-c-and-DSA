#include<stdio.h>
#include<conio.h>
float tempconvo(int c);
int main()
{
    int c ;
    printf("please enter the temp in c=");
    scanf("%d",&c);
    printf("The temp in fahrenheit=%f",tempconvo(c));
    
    return 0;
getch();
}

float tempconvo(int c){
    float result;
    result=((1.8)*c)+32;
    return result;
}
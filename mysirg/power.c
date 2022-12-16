#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int x,y ;
    printf("Please enter the value of x and y to find pow(x,y)=");
    scanf("%d%d",&x,&y);
    printf("The required value is %lf",pow(x,y));
    return 0;
getch();
}
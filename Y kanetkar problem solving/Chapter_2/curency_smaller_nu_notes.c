//*Program to convert a given amount to smaller number of notes.

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int x,a,b,c,d,e,f;
    printf("Please enter your Amount in :");
    scanf("%d",&x);
    a=x/100;
    b=((x%100)/50);
    c=(((x%100)%50)/10);
    d=((((x%100)%50)%10)/5);
    e=(((((x%100)%50)%10)%5)/2);
    f=(((((x%100)%50)%10)%5)%2);
    printf("Notes of 100 is %d",a);
    printf("\nNotes of 50 is %d",b);
    printf("\nNotes of 10 is %d",c);
    printf("\nNotes of 5 is %d",d);
    printf("\nNotes of 2 is %d",e);
    printf("\nNotes of 1 is %d",f);

    
    return 0;
getch();
}
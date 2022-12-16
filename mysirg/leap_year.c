//Program to check leap year.
#include<stdio.h>
#include<conio.h>

int main(){
    int year;
    printf("Please enter the year=");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 || year%400==0){
        printf("leap year");
    }
    else{
        printf("Not a leap year");
        return 0;
        getch();

    }
}
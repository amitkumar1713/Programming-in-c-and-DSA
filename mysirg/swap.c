//! c program to swap two numbers
#include<stdio.h>
#include<conio.h>

int main(){
    int a,b;
    printf("Please enter two number=");
    scanf("%d%d",&a,&b);
    int temp=a;
    a=b;
    b=temp;
    printf("After swapping %d\t%d",a,b);
}
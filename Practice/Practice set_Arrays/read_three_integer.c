#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    FILE *ptr;
    ptr=fopen("amit.txt","r");
    //char c=fgetc(ptr);
    fprintf("The first integer=%d",ptr);
    fprintf("The second integer=%d",ptr);
    fprintf("The third integer=%d",ptr);
    return 0;
getch();
}
#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10];
    int*ptr=&arr[0];
    printf("The result is %d",ptr+2==&arr[2]);
    
    return 0;
getch();
}
// Program to check even or odd without using % operator.
#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("Please enter a number to check whether the number is even or odd=");
    scanf("%d",&n);
    if(n==2*(n/2))
    {
        printf("Even number");
    }
    else{
        printf("Odd number");
    }
    return 0;
    getch();
}
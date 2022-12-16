#include<stdio.h>
#include<conio.h>

int main()
{
    int n,count=0 ;
    printf("Please enter a number=");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("No of digits=%d",count);
    return 0;
getch();
}
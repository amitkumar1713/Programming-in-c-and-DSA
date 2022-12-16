//Program to print n natural numbers.
#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i;
    printf("Enter a number");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        printf("Natural numbers are=%d\n",i);
    }
return 0;
getch();
}
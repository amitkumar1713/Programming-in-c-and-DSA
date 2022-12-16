//Program to check for prime number.

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i ;
    printf("please enter the number=");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0)
        {
            break;
        }
        
    }
    if(i==n){
        printf(" prime number");
    }
    else{
        printf("Not a prime number");
    }
    return 0;
getch();
}
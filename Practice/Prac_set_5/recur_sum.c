//write a program to find the sum of first n natural number with the help of recursion.

#include<stdio.h>
#include<conio.h>

int sum(int n);

int main()
{
    int d ;
    printf("please enter the digit=");
    scanf("%d",&d);
    printf("The sum of n natural number is %d",sum(d));
    
    return 0;
getch();
}

int sum(int n){
    int result;
    if(n==1)
    return(1);
return(n+sum(n-1));
    
    

}
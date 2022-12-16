#include<stdio.h>
#include<conio.h>
int multiplier(int *p){
    int m=10*(*p);
    return m;
}
int main()
{
    int n=5 ;
    printf("The value after multiplication is %d",multiplier(&n));
    
    return 0;
getch();
}
// If a five-digit number is input through the keyboard, write a 
// program to reverse the number.

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,a,l,b,m,c,d,o,e  ;
    printf("Enter a five digit number to reverse the number=");
    scanf("%d",&n);
    a=n%10;
    l=n/10;
    b=l%10;
    m=l%100;
    c=m/10;
    o=l/100;
    d=o%10;
    e=o/10;

    printf("your result is %d%d%d%d%d",a,b,c,d,e);
    return 0;
getch();
}

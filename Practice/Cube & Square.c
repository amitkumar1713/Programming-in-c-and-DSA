#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    printf("Enter two number=");
    scanf("%d%d",&a,&b);
if(a>b)
{
    c=a*a*a;
    printf("cube of a is %d=",c);
}
else if(b>a)
{
    d=b*b*b;
    printf("The cube of b is %d",d);
}

getch();
}
// Program to find HCF of two number.

#include <stdio.h>
#include <conio.h>
#include<math.h>

int main()
{
    int a, b,av,i,c;
    printf("Please enter two number=");
    scanf("%d%d", &a, &b);
    //av=(a+b)/2;
    for(i=(a<b)?a:b ;i>=1;i--)
    {
        while((a%i)==0 && (b%i)==0)
        {
            c=i;
            break;
        }
    }
    printf("The highest common factor is=%d",c);

    return 0;
    getch();
}
#include<stdio.h>
#include<conio.h>

int main()
{
    int n,p,q,r,s ;
    printf("Please enter a number=");
    scanf("%d",&n);
    p=n%10;
    s=n/10;
    q=s%10;
    r=n/100;
    printf("values are %d%d%d\n",p,q,r);
    if(n==(p*p*p)+(q*q*q)+(r*r*r))
    {
        printf("Armstrong number");
    }
    else{
        printf("NOt a armstrong number");
    }

    return 0;
getch();
}
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,p,q,r,s ;
    printf("Please enter a number=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=i%10;
        s=i/10;
        q=s%10;
        r=i/100;
        if(i==(p*p*p)+(q*q*q)+(r*r*r)&&i!=1)
        {
            printf("I=%d\n",i);
        }
    }
    
    return 0;
getch();
}
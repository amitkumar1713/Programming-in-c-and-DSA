//Program to Print prime numbers in a range.

#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,i,j;
    printf("Please enter the upper and lower limit=");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }

        if(j==i)
        printf("%d\n",j);
    }

 return 0;
 getch();
}
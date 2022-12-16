#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i;
    printf("Please enter the value of n=");
    scanf("%d",&n);
    for(i=n+(n-1);i>=1;i--)
    {
      if (i%2!=0)
      {
        printf("\t%d",i);
      }
      
    }
    return 0;
getch();
}
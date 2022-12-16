#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,n3,n4 ;
    printf("Please enter four numbers to find the greatest between them=");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    if (n1>n2 && n1>n3 && n1>n4)
    {
        printf("%d is the greatest number.",n1);
    }
    if (n2>n1 && n2>n3 && n2>n4)
    {
        printf("%d is the greatest number.",n2);
    }
    if (n3>n2 && n3>n1 && n3>n4)
    {
        printf("%d is the greatest number.",n3);
    }
    if (n4>n1 && n4>n3 && n4>n2)
    {
        printf("%d is the greatest number.",n4);
    }
    if (n1==n2==n3==n4)
    {
        printf("All are same number");
    }
    
    return 0;
getch();
}
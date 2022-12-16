#include<stdio.h>
#include<conio.h>

int main()
{
    int skip=5,i=0;
    printf("Enter a number=");
    scanf("%d",i);
    while (i<10)
    {
        if(i!=skip)
        {
            continue;
        }
        else{
            printf("%d",i);
        }
    }

    
    return 0;
getch();
}
#include<stdio.h>
#include<conio.h>
int main()
{
    for(int i=0;i<20;i++)
    {
        
        if(i==7)
        {
            continue;
        }
        printf("The numbers are %d\n",i);
    }
    return 0;
    getch();
}
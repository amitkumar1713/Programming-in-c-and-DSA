#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("Enter the number=");
    scanf("%d", &n);
    
    if (n % 2 == 0)
        {
            printf("Even number");
        }

    else
    {
        printf("odd number");
    }
    return 0;
    getch();
}
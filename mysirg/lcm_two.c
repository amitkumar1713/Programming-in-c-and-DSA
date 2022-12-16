#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, i, c;
    printf("Enter two number a and b=");
    scanf("%d%d", &a, &b);
    for (i = 1; i <= (a * b); i++)
    {
        if ((i % a == 0) && (i % b == 0))
        {

            break;
        }
    }
    printf("Your LCM is=%d", i);
    return 0;
    getch();
}
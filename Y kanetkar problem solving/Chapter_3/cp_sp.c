#include <stdio.h>
#include <conio.h>

int main()
{
    float cp, sp;
    printf("Please enter the Cost Price of this Product=");
    scanf("%f", &cp);
    printf("Please enter the Selling  Price of this Product=");
    scanf("%f", &sp);
    if (cp > sp)
    {
        printf("your loss is=%f", cp - sp);
    }

    else if (cp < sp)
    {
        printf("your Profit is=%f", sp - cp);
    }

    else if (cp = sp)
    {
        printf("!!NO PROFIT NO LOSS!!");
    }

    return 0;
    getch();
}
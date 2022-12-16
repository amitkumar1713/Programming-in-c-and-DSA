#include <stdio.h>
#include <conio.h>

int main()
{
    int p, d;
    int pp = p - d;
    char name;
    printf("\nEnter the name of Customer=");
    scanf("%c", &name);
    printf("\nKindly,Enter the Price =");
    scanf("%d", &p);
    printf("\nKindly,Enter the  Discount =");
    scanf("%d", &d);

    printf("!!!!!!!!!!!!!!!!!!!!The software is Made BY Amit Kumar!!!!!!!!!!!!!!!!!!!!!!!!!!");
    printf("\n->Name of Customer=%c", name);
    printf("\n->Price of the product =%d", p);
    printf("\n->Discount =%d", d);
    printf("\n->Amount to pay =%d", pp);

    return 0;
    getch();
}
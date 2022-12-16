//Print the star pattern
//*
//**
//***
//****
//*****
#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j;
    for (j = 1; j <= 5;j++)  //Row
    {
        for (i = 1; i <= 5; i++)  //column
        {
            if(i<=j)
            printf("*");
            else
            {
                printf("");
            }
            
        }
        printf("\n");
    }

    return 0;
    getch();
}

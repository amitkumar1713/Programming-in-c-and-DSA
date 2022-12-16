//program to create a 2d array and take  inputs from the user and print it .

#include <stdio.h>
#include <conio.h>

int main()
{
    int row = 3;
    int column = 5;
    int value[3][5];
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("please enter the value for row position %d and column position %d\n=",i,j);
            scanf("%d",&value[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            
            printf("Values at row %d and column %dare=%d\n",i,j,value[i][j]);
        }
    }

    return 0;
    getch();
}
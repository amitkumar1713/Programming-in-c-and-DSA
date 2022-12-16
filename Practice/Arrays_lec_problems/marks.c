//program to take input of 5 students and print it with the help of arrays.

#include <stdio.h>
#include <conio.h>

int main()
{
    int marks[5],i,j;
    
    for (i = 0; i < 5; i++)
    {
        printf("Please enter the marks of students=");
        scanf("%d", &marks[i]);
        
    }
    for ( j = 0; j < 5; j++)
    {
        printf("The marks of students are %d\n", marks[j]);
    }
    

    return 0;
    getch();
}
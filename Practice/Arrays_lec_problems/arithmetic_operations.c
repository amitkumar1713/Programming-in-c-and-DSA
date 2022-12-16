//Program to do the arithmetic operations with the pointers.

//Addition
#include<stdio.h>
#include<conio.h>

int main()
{
    int i=5 ;
    printf("Address of i is %u\n",&i);
    int*p=&i;
    p++;
    printf("Address of p is %u",p);

    return 0;
getch();
}

//! Subtraction

// #include<stdio.h>
// #include<conio.h>

// int main()
// {
//     int j=6 ;
//     int*pp=&j;
//     pp--;
//     printf("The address of j is %u\n",&j);
//     printf("The address of pp is %u",&pp);

//     return 0;
// getch();
// }

//! Subtraction of one pointer from another
// #include<stdio.h>
// #include <conio.h>

// int main()
// {
//     int i[5] = {1, 2, 3, 4, 5};
//     int *p = &i[0];
//     int *pp = &i[4];
//     printf("Difference of two pointers=%d\n",pp-p);
//     printf("Difference of two pointers=%d\n",(pp-p)-1);
//     printf("Difference of two pointers=%d\n",(pp-p)+1);

//     return 0;
//     getch();
// }


//! comparison of one pointer from another
// #include<stdio.h>
// #include <conio.h>

// int main()
// {
//     int i[5] = {1, 2, 3, 4, 5};
//     int *p = &i[0];
//     int *pp = &i[4];
//     printf("%d\n",pp==p);
//     printf("%d\n",(pp<=p));
//     printf("%d\n",(pp>=p));

//     return 0;
//     getch();
// }

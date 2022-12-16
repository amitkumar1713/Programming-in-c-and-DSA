// Write a function to calculate sum of squares of first N natural numbers.(all four ways: TNRN, TSRN, TNRS, TSRS)

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!TNRN!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

// #include<stdio.h>
// #include<conio.h>

// void squarenatur();

// int main(){
//     int t,i,sum=0,j;
//     printf("Please enter the term =");
//     scanf("%d",&t);
//     for(i=1;i<=t;i++)
//     {
//         j=i*i;
//         sum+=j;

//     }
//     printf("Sum of square of natural number=%d",sum);
//     return 0;
//     getch();
//}

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!TSRN!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

// #include<stdio.h>
// #include<conio.h>

// void squarenatur(int n);

// int main(){
//     int t,i,sum=0,j;
//     printf("Please enter the term =");
//     scanf("%d",&t);
//     for(i=1;i<=t;i++)
//     {
//         j=i*i;
//         sum+=j;

//     }
//     printf("Sum of square of natural number=%d",sum);
//     return 0;
//     getch();
// }

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!TSRS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

// #include<stdio.h>
// #include<conio.h>

// int squarenatur(int n);

// int main(){
//     int t;
//     printf("Please enter the term =");
//     scanf("%d",&t);

//     printf("Sum of square of natural number=%d",squarenatur(t));
//     return 0;
//     getch();
// }

// int squarenatur(int n){
//     int i,sum=0,j;
//     for(i=1;i<=n;i++)
//     {
//         j=i*i;
//         sum+=j;

//     }
//     return sum;
// }
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!TNRS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#include <stdio.h>
#include <conio.h>

void squarenatur();

int main()
{
    int t;
    printf("Please enter the term =");
    scanf("%d", &t);
    int i, sum = 0, j;
    for (i = 1; i <= t; i++)
    {
        j = i * i;
        sum += j;
    }
    return sum;

    getch();
}

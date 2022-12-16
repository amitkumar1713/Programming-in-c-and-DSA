#include<stdio.h>
//!printing the Array

void printarray(int*A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",A[i]);
    }
    printf("\n");

}

//? using Bubble Sort Algorithm.
void bubblesort(int*A,int n)
{
    int temp;
    for(int i=0;i<n;i++) //! For number of passes
    {
        for(int j=0;j<n-1-i;j++)//!for number of comparisons
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
} 


int main()
{
    int A[]={5,7,2,3,4};
    int n=5;
    printarray(A,n);
    bubblesort(A,n);
    printarray(A,n);
    return 0;
}
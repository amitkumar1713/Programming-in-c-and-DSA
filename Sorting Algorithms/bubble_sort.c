#include<stdio.h>

void printarray(int*A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",A[i]);
    }
    printf("\n");

}

void bubblesort(int*A,int n)
{
    int temp;
    for(int i=0;i<n-1;i++) //For number of passes           
    {
        for(int j=0;j<n-1-i;j++) //For number of comparisons
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


int main(){
    int A[]={1,5,8,4,6,9};
    int n=6;
    printarray(A,n);
    bubblesort(A,n);
    printarray(A,n);
    return 0;

}
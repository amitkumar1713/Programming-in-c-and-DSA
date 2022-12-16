//!Code to delete an element in a Array.

#include<stdio.h>

void Display(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}

void deletion(int arr[],int index,int size)
{
    for(int i=index;i<=size-1;i++)
    {
        arr[i]=arr[i+1];
    }

}

int main()
{
    int arr[20]={1,7,9,6,2};
    int size =5;
    int index=3;
    Display(arr,size);
    deletion(arr,index,size);
    size-=1;
    printf("\nAfter deletion\n");
    Display(arr,size);
    return 0;
}
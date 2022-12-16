#include<stdio.h>

void PrintArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("\t%d",arr[i]);
        //printf("\n");
    }
}

void insertion(int arr[],int size,int index,int element)
{
    for(int j=size-1;j>=index-1;j--)
    {
        arr[j+1]=arr[j];
    }
    arr[index]=element;

}


int main()
{
    int arr[20]={2,6,8,9,4};
    int size=5;
    int element=17;
    PrintArray(arr,size);
    insertion(arr,size,1,element);
    size+=1;
    printf("\nAfter Insertion\n");
    PrintArray(arr,size);
    return 0;
}
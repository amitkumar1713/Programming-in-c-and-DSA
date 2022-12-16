//!program to do linear search in an array.

#include<stdio.h>

int linearsearch(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    if(arr[i]==element)
    return i;
return-1;
}

int main()
{
    int arr[]={2,7,89,56,48,69};
    int size=sizeof(arr)/sizeof(int);
    int element=3;
    int search= linearsearch(arr,size,element);
    printf("The element %d found at index %d",element,search);

}


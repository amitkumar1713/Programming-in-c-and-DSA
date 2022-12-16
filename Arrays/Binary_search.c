//!Program to illustrate binary search.
#include<stdio.h>

int binarysearch(int arr[],int element,int size)
{
    int low=0;
    int high=size-1;
    
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==element)
        {
            return mid;
        }
        if(arr[mid]>element)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;
    
}

int main()
{
    int arr[]={2,4,6,8,10,12,14,16};
    int size=sizeof(arr)/sizeof(int);
    int element=10;
    int searchindex=binarysearch(arr,element,size);
    //printf("%d",size);
    printf("Element %d found at index %d",element,searchindex);
    return 0;
}
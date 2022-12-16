//!Program to find Highest and Second Highest Element in an array.

#include<stdio.h>

int high(int*arr,int size){
    int i;
    for(i=0;i=size-1;i++)
    {
        for (int j = size-1; j=0; j++)
        {
            if(arr[i]>arr[j]){
                printf("%d",arr[i]);
                return 1;
                break;
                
            }
        }
        
    }
    

}

int main(){
    int arr[]={2,9,47,36,85};
    int size=sizeof(arr)/sizeof(int);
    high(arr,size);

}
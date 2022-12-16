#include<stdio.h>

void printarray(int*arr,int size)
{
    int i;
    for( i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void singlemerge(int*a,int size,int*b,int low,int mid,int high)
{
    int i,j,k=0;
    i=low;
    j=mid+1;
    
    while(i<=mid&&j<=high)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        b[k]=a[j];
        j++;
        k++;
    }
    while(i<=mid)
    {
        b[k]=a[i];
        i++;k++;
    }
    while(j<=high)
    {
        b[k]=a[j];
        j++;k++;
    }
    for (int l = 0; l < size; l++)
    {
        for ( int m = 0; m < size; m++)
        {
            a[l]=b[m];
        }
        
    }
    
    

}

int main(){
    int a[]={9,2,15,1,4,17};
    int size=6;
    int low=0;
    int high=5;
    int mid=(low+high)/2;
    int b[size];
    printf("Before SingleMerge=\n");
    printarray(a,size);
    printf("After SingleMerge=\n");
    singlemerge(a,size,b,low,mid,high);
    printarray(b,size);

}
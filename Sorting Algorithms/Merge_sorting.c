//!Merge Sorting in Multiple Arrays.

#include<stdio.h>

void printarray(int*arr,int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    
}

void mergesort(int*a,int*b,int*c,int s1,int s2)
{
    int i,j,k;
    i=j=k=0;
    while (i<s1&&j<s2)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
           c[k]=b[j];
           j++;
           k++;
        }
        
    }
    while (i<s1)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while (j<s2)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    
    

}

int main(){
    int a[]={4,9,14,16};
    int s1=4;
    int b[]={17,19,28,56,64};
    int s2=5;
    int c[s1+s2];
    int s3=s1+s2;
    printf("Before MergeSort=\n");
    printarray(a,s1);
    printarray(b,s2);
    mergesort(a,b,c,s1,s2);
    printf("After MergeSort=\n");
    printarray(c,s3);

    
    return 0;
}
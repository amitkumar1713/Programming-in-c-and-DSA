//! Code to demonstrate the Inserion Sort Algorithm
#include<stdio.h>
#include<conio.h>

void printarray(int*arr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}

void insertionsort(int*arr,int size)
{
    int num;
    int j;
    int i;
    for(i=1;i<size;i++) //!For  no of passes
    {
        int num=arr[i];
        j=i-1;

        //!For no of comparisons
        while (j>=0&&arr[j]>num)
        {
            arr[j+1]=arr[j];
            j--;
        }
        
        
       arr[j+1]=num;
    }

}

int main(){
    int arr[]={4,9,13,7,2};
    int size=5;
    printf("Before Sorting=\n");
    printarray(arr,size);
    printf("\nAfter Sorting=\n");
    insertionsort(arr,size);
    printarray(arr,size);
    return 0;
    getch();
}
// #include <stdio.h>
// #include <conio.h>

// void printarray(int *arr, int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
// }

// void insertionsort(int *arr, int size)
// {
//     int i ;
//     int j = 0;
//     for (j = 0; j < size; j++)
//     {
//         for (i = j; i >= 0; i--)
//         {
//             if (arr[j] < arr[i])
//             {

//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//                 j--;
//             }
//         }
//     }
// }

// int main()
// {
//     int arr[] = {45,25,65,18,96};
//     int size = 5;
//     printf("Before Sorting\n");
//     printarray(arr, size);
//     insertionsort(arr, size);
//     printf("\nAfter Sorting\n");
//     printarray(arr, size);
// }


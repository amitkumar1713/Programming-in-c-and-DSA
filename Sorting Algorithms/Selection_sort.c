 #include <stdio.h>
 #include<conio.h>

void printarray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void selectionsort(int *arr, int size)
{
    int i = 0;
    int j;
    int temp;
    for (i = 0; i < size; i++) //!? For no of passes.
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {15,68,12,35,46,8};
    int size = 6;
    printf("Before Sorting=\n ");
    printarray(arr, size);
    printf("\nAfter Sorting=\n ");
    selectionsort(arr, size);

    printarray(arr, size);
    return 0;
    getch();
}

//! Another code
// #include<stdio.h>

// void printArray(int* A, int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     printf("\n");
// }

// void selectionSort(int *A, int n){
//     int indexOfMin, temp;
//     printf("Running Selection sort...\n");
//     for (int i = 0; i < n-1; i++)
//     {
//         indexOfMin = i;
//         for (int j = i+1; j < n; j++)
//         {
//             if(A[j] < A[indexOfMin]){
//                 indexOfMin = j;
//             }
//         }
//         // Swap A[i] and A[indexOfMin]
//         temp = A[i];
//         A[i] = A[indexOfMin];
//         A[indexOfMin] = temp;
//     }
// }

// int main(){
    // Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
    //  00  01  02  03  04
    // |03, 05, 02, 13, 12

    // After first pass
    //  00  01  02  03  04
    //  02,|05, 03, 13, 12

    // After second pass
    // 00  01  02  03  04
    // 02, 03,|05, 13, 12

    // After third pass
    // 00  01  02  03  04
    // 02, 03, 05,|13, 12

    // After fourth pass
    // 00  01  02  03  04
    // 02, 03, 05, 12,|13


//     int A[] = {3, 5, 2, 13, 12};
//     int n = 5;
//     printArray(A, n);
//     selectionSort(A, n);
//     printArray(A, n);

//     return 0;
// }

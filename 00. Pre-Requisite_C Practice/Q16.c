// 16)	Write a program to merge two sorted arrays into a single sorted array.

#include <stdio.h>

void merge(int* arr1, int* arr2, int size1, int size2, int* arr3)
{
    for(int i = 0 , j = size1 ; i<size1 , j<(size1+size2); i++,j++)
    {
        arr3[i] = arr1[i];
        arr3[j] = arr2[j-size1];
    }

    return;

}

void sort(int* ptr, int size)
{
    for(int i = 0 ; i <size;i++)
    {
         for(int j = 0 ; j <size;j++)
         {
        if(ptr[j] > ptr[j+1])
        {
            int temp = ptr[j];
            ptr[j] = ptr[j+1];
            ptr[j+1] = temp;
        }

         }
    }

    return;
}

int main()
{
    int arr1[5] = {5,4,3,2,1};
    int arr2[5] = {10,9,8,7,6};
    int arr3[10];

    int* ptr1 = arr1;
    int* ptr2 = arr2;
    int* ptr3 = arr3;

    merge(ptr1, ptr2,5 , 5, ptr3);
    printf("Merged array: ");
    for(int i =0;i<10;i++)
    {
        printf("%d " ,arr3[i]);
    }

    printf("\n");
    printf("Sorted array: ");
    sort(ptr3,10);

    for(int i =0;i<10;i++)
    {
        printf("%d " ,arr3[i]);
    }


}
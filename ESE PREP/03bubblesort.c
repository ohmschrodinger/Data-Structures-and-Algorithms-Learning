#include <stdio.h>
#include <stdlib.h>

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int* arr, int n)
{
    int flag = 0;
    for(int i = 0; i<= n-1 ; i++)
    {
        for(int j = 0; j<= n - i - 1 ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                // swap jth and j+1 th element
                swap(&arr[j] , &arr[j+1]);
                flag = 1;
            }

        }

        if(flag==0)
        {
            return;
        }
    }
}


int main()
{
    int arr[] = {5,4,1,3,2,9};
    int* ptr = arr;
    bubble_sort(ptr,6);

    for(int i = 0; i<6;i++)
    {
        printf("%d ", ptr[i]);
    }
    return 0;
}
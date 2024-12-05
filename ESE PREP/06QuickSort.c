#include <stdio.h>
#include <stdlib.h>

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while(i<=j)
    {
        while(i<=high && arr[j]<= pivot)
        {
            i++;
        }

        while(arr[j] > pivot)
        {
            j--;
        }

        if(i<j)
        {
            // swap ith and jth element
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;


    return j;
}


void quick_sort(int arr[], int low, int high)
{
    if(low<high)
    {
        int j = partition(arr, low,high);
        quick_sort(arr,low,j-1);
        quick_sort(arr,j+1,high);
    }
}


int main()
{
        int arr[10] = {2, 4, 3, 9, 1, 4, 8, 7, 5, 6};

    quick_sort(arr, 0, 9);

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;

}
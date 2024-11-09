#include <stdio.h>

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low+1;
    int j = high;

    while(i<=j)
    {
        while(i <=high && arr[i] <= pivot)
        {
            i++;
        }

        while(j >=low && arr[j] > pivot)
        {
            j--;
        }

        if(i<j)
        {
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[low], &arr[j]);
    return j;
}

void quick_sort(int arr[], int low, int high)
{
    if(low<high)
    {
        int j = partition(arr, low, high);
        quick_sort(arr,low,j-1);
        quick_sort(arr,j+1,high);
    }
}

int main() {
    int arr[10] = {2, 4, 3, 9, 1, 4, 8, 7, 5, 6};

    quick_sort(arr, 0, 9);

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
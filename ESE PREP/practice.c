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
    for(int i = 0; i<= n-1; i++)
    {
    int flag = 0;
        for(int j = 0; j<= n- i - 1 ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                // swap jth and j + 1 th element
                swap(&arr[j], &arr[j+1]);
                flag = 1;
            }
        }

        if(flag == 0)
        {
            return;
        }
    }
}

void insertion_sort(int* arr, int n)
{
    for(int i = 1; i< n; i++)
    {
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void selection_sort(int* arr, int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int min_index = i;

        for(int j = i+1 ; j<n ; j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index = j;
            }
        }

        if(min_index!=i)
        {
            // swap min index and i
            swap(&arr[min_index], &arr[i]);
        }
    }
}

int partition(int* arr, int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while(i<=j)
    {
        while(i<= high && arr[i]<=pivot)
        {
            i++;
        }

        while(arr[j]>pivot)
        {
            j--;
        }

        if(i<j)
        {
            // swap i and j
            swap(&arr[i], &arr[j]);
        }
    }

    // swap low and j
    swap(&arr[low], &arr[j]);
    return j;
}

void quick_sort(int* arr, int low, int high)
{
    if(low<=high)
    {
        int j = partition(arr,low,high);
        quick_sort(arr,low,j-1);
        quick_sort(arr,j+1,high);
    }
}
int main()
{
    
    return 0;
}
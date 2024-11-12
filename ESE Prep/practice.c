#include <stdio.h>

int binary_search(int arr[], int n, int key)
{
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(arr[mid]==key)
        {
            return mid;
        }

        if(arr[mid] > key)
        {
            high = mid - 1;
        }

        if(arr[mid] < key)
        {
            low = mid + 1;
        }
    }

    return -1;

}


int binary_search_recursive(int* arr, int n, int key, int low, int high)
{
    int mid = low + (high - low) / 2;
    if(low>high)
    {
        return -1;
    }

    if(arr[mid]==key)
    {
        return mid;
    }

    if(key > arr[mid])
    {
        return binary_search_recursive(arr, n, key,mid+1,high);
    }
    if(key < arr[mid])
    {
        return binary_search_recursive(arr, n, key,low,mid-1);
    }
}



void bubble_sort(int* arr, int n)
{
    for(int i=0; i< n-1; i++)
    {
        for(int j = 0; j< n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                // swap j and j+1
                // flag
            }
        }
        // if flag is unchanged return;
    }
}

void insertion_sort(int* arr, int n)
{
    for(int i = 1; i<n;i++)
    {
        int j = i-1;
        int key = arr[i];
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
    for(int i = 0; i < n-1;i++)
    {
        int min_index = i;
        int j = i+1;
        while(j<n)
        {
            if(arr[min_index] > arr[j])
            {
                min_index = j;
            }
            j++;
        }

        if(min_index!=i)
        {
            // swap min index and i
        }
    }
}

int partition(int arr[], int low, int high)
{
    int j = high;
    int i = low + 1;
    int pivot = arr[low];

    while(i<=j)
    {
        while(j>=low && arr[j] > pivot)
        {
            j--;
        }
        while(i<=high && arr[i] < pivot)
        {
            i++;
        }

        if(i<j)
        {
            // swap i and j
        }
    }

    // swap pivot and j
    return j;
}


void quick_sort(int arr[], int low, int high)
{
    if(low<high)
    {
        int j = partition();
        quick_sort(arr,low, j-1);
        quick_sort(arr,j+1,high);
    }
}
#include <stdio.h>

int binary_search(int* arr, int key, int low, int high)
{
    int mid = low + (high - low)/2;

    if(low<=high)
    {
    
    if(arr[mid] == key)
    {
        return mid;
    }

    else if(arr[mid] > key)
    {
        return binary_search(arr, key, low, mid-1);
    }

    else if(arr[mid] < key)
    {
        return binary_search(arr, key, mid + 1, high);
    }   
    }

    return -1;
}

int main()
{
    int arr[] = {0,1,2,3,4,5,6};
    int* ptr = arr;

    printf("%d ", binary_search(ptr,2,0,6));

    return -1;
    
}
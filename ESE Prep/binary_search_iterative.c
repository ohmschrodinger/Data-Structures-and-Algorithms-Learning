#include <stdio.h>

int binary_search(int* arr, int n, int key)
{
    int low = 0;
    int high = n-1;
    int mid = low + (high-low)/2;

    while(low<=high)
    {
    int mid = low + (high-low)/2;
    if(arr[mid] == key)
    {
        return mid;
    }

    else if(arr[mid] > key)
    {
        high = mid - 1;
    }

    else if(arr[mid] < key)
    {
        low = mid + 1;
    }
    }

    return -1;
}


int main()
{
    int arr[] = {0,1,2,3,4,5,6};
    int* ptr = arr;

    printf("%d ", binary_search(ptr,7,2));

    return -1;
    
}
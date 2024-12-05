#include <stdio.h>

int binary_search(int arr[], int n, int key, int low, int high)
{
    int mid = low + (high-low)/2;
    if(low<=high)
    {
        if(arr[mid] == key)
        {
            return mid;
        }

        else if(arr[mid]> key)
        {
            return binary_search(arr, n , key ,low ,mid - 1);
        }

        else if(arr[mid]< key)
        {
            return binary_search(arr, n , key , mid+1 ,high);
        }
    }
    return -1;
}



int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d",binary_search(arr,10,7, 0, 10));
    return 0;
}
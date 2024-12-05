#include <stdio.h>

int binary_search(int arr[], int n, int key)
{
    int low = 0;
    int high = n-1;

    while(low<=high)
    {
        int mid = low + (high - low)/2;

        if(arr[mid]==key)
        {
            return mid;
        }

        else if(arr[mid]>key)
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
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d",binary_search(arr,10,111));
    return 0;
}
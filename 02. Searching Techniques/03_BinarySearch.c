#include <stdio.h>
//best case time complexity O(1)
//worst case time complexity O(log2 n)
int binary_search(int arr[],int size, int key)
{
    int low = 0;
    int high = size - 1;
    while(low<=high)
    {
        int mid = low + (high - low)/2;
        if(arr[mid] == key) return mid;

        else if(arr[mid]> key)
        {
            high = mid - 1;
        }
        else if(arr[mid]> key)
        {
            low = mid + 1;
        }
    }
    return -1;
}


int main()
{
    int arr[10] = {2,43,1,13,16,34,22,75,66,41};
    int result = binary_search(arr,10,16);
    if(result == -1) printf("Element not found");
    else printf("Element found at index: %d",result);
    return 0;
}
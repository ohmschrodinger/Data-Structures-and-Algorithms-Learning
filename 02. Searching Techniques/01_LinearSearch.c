#include <stdio.h>
//best case time complexity O(1)
//worst case time complexity O(n)
int linear_search(int arr[], int n, int key)
{
    for(int i =0; i<n ; i++)
    {
        if(arr[i]==key) return i;
    }
    return -1;
}

int main()
{
    int arr[10] = {2,43,1,13,16,34,22,75,66,41};

    int result = linear_search(arr,10,16);
    if(result == -1) printf("Element not found");
    else printf("Element found at index: %d",result);

    return 0;
}
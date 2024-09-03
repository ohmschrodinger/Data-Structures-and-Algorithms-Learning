#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int linear_search(int arr[], int n, int key)
{
    bool flag = false;
    int indexes[n];

    int j = 0;
    for(int i =0; i<n ; i++)
    {
        if(arr[i]==key)
        {
            indexes[j] = i;
            j++;
            flag = true;
        }
    }

    if(flag ==true)
    {
        printf("Element found at indexes: ");
        for(int i =0; i<j ; i++)
        {
            printf("%d ", indexes[i]);
        }
    }

    else
    {
        printf("Element not found");
    }   
}

int main()
{
    int arr[10] = {2,43,1,13,16,13,22,13,66,41};

    linear_search(arr,10,13);
    

    return 0;
}
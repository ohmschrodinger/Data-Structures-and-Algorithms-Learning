#include <stdio.h>
#include <stdbool.h>

void Bubble_sort(int* arr, int n)
{
    bool flag = true;
    for(int i = 0 ; i< n - 1; i++)
    {
        for(int j = 0 ; j< n - i - 1 ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                //set flag as true
                flag = false;
            }
        }
        if(flag = true)
        {
         break;
        }
    }
    return;
}

int main()
{
    int arr[5] = {5,4,3,2,1};
    int* ptr = &arr[5];
    Bubble_sort(ptr,5);

    for(int i =0; i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

//worst case time complexity -> O(n2)
//best case time complexity -> O(n)
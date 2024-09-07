#include <stdio.h>
void selection_sort(int* ptr, int n)
{
    for(int i = 0 ;i < n -1 ; i++)
    {
        int min_index = i;
        for(int j = i+1 ; j< n ; j++)
        {
            if(ptr[min_index]>ptr[j])
            {
                min_index = j;
            }
        }
    if(min_index!=i)
    {
        int temp = ptr[min_index];
        ptr[min_index] = ptr[i];
        ptr[i] = temp; 
    }
    }
    return;
}

int main()
{
    int arr[10] = {5,4,5,23,100,50,3,3,2,1};
    int* ptr = arr;
    selection_sort(ptr,10);
    for(int i =0; i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
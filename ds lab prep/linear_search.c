#include <stdio.h>

void selection_sort(int* arr , int n)
{
    for(int i = 0 ; i <= n-1 ; i++)
    {
        int min_index = i;
        for(int j = i ; j<= n -1 ; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        //swap arr[i] and arr[min_index];
        if(min_index!=i)
        {
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp; 

        }

    for(int i = 0; i< 6 ; i++)
    {
        printf("%d (adress: %p)", arr[i] , &arr[i]);
    }

    printf("\n");
    }
}




int main()
{
    int arr[6] = {5,2,8,9,10,5};
    int* ptr = arr;

    selection_sort(ptr ,6 );


}

#include <stdio.h>

void linear_search(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        int empty[n];
        int e = 0;
        if(arr[i] == key)
        {
            empty[e] = i;
            e++;
        }

        for(int i=0; i<e;i++ )
        {
            printf("%d ", empty[i]);
        }
    }
    return;
}

int main()
{
    int arr[] = {4,2,1,9,2,4,2,3};
    linear_search(arr,8,2);
    return 0;
}
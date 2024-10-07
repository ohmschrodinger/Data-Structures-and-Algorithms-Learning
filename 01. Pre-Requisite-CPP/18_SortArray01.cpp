#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,1,1,0,1,0,1,1,0,0,0,1,0,1};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int arr2[n-1];
    int count_0 = 0;
    int count_1 = 0;

    for(int i =0 ; i< n;i++)
    {
        if(arr[i] ==0) count_0++;
        else count_1++;    
    }

    for(int i = 0 , j=count_0; i<count_0 && j<n ;j++,i++)
    {
        arr2[i] = 0;
        arr2[j] = 1;
    }
    
    for(int element:arr2)
    {
        cout<<element<<" ";
    }
    return 0;
}
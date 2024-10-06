#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    
    int second_max;
    for(int i = 0; i< size ; i++)
    {

        if(arr[i] > max)
        {
            second_max = max;
            max = arr[i];
        }
    }

    cout<<second_max;
    return 0;
}
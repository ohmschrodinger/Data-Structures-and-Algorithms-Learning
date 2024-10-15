#include <iostream>
#include <vector>
using namespace std;

// Q- find the total number of pairs in the array whose sum is equal to the given value x
int main()
{
    int arr[] = {1,2,3,4,6,5,4,3,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x = 9;
    int counter = 0;

    for(int i = 0 ; i < size ; i++)
    {
        for(int j = i+1; j< size ;j++)
        {
            if(arr[i] + arr[j] == x) counter++;
        }
    }

    cout<<counter;


    // for number of triplets
    int triplet_counter = 0;

    for(int i = 0 ; i < size ; i++)
    {
        for(int j = i+1; j< size ;j++)
        {
            for(int k = j + 1 ; k <size ; k++)
            {

            if(arr[i] + arr[j] + arr[k] == x) triplet_counter++;
            }
        }
    }
    cout<<endl;
    cout<<triplet_counter;
    return 0;
}
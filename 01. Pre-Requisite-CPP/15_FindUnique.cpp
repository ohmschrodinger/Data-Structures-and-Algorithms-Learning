#include <iostream>
using namespace std;

int main()
{
    // find the unique element in array where all the other elements are repeating 
    int arr[] = {1,2,3,5,2,1,3,3,2,4,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    int unique;
    int counter = 0;

    for(int i = 0 ; i < size ; i++)
    {
        for(int j = i+1; j< size ;j++)
        {
            if(arr[i] == arr[j]) counter++;
        }
        if(counter == 0){ unique = arr[i]; break;}
        counter=0;
    }
    cout<<unique;
    return 0;
}
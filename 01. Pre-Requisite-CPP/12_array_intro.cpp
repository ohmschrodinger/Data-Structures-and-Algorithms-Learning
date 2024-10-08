#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    cout<<arr[0]<<endl;
    cout<< sizeof(arr)/sizeof(arr[0])<<endl;

    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    // method 1- for loop:  to traverse the array 
    for(int i = 0 ; i < size ; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    // method 2- for each loop:  to traverse the array 
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    
    // method 3- while loop:  to traverse the array 
    int m = 0;
    while(m<size)
    {
        cout<<arr[m]<<" ";
        m++;
        
    }

    //taking input from array

    int arr2[5];

    size = 5;
    cout<<"\nEnter Elements:";
    for(int i =0 ; i< size ; i++)
    {
        cin>>arr2[i];
    }

    // method 2: for each loop
    // for(int &x:arr2)
    // {
    //     cin>>x;
    // }
 
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    int k = 2;

    k = k%n;
    int arr2[10];
    int j = 0;
    for(int i = n-k; i<n;i++)
    {
        arr2[j++]  = arr[i];
    }

    for(int i = 0; i< n-k; i++)   
    {
        arr2[j++] = arr[i];
    }


    for(int element:arr2)
    {cout<<element<<" ";}

    cout<<endl;
    // using vectors

    vector <int> v(10);
    int i = 1;
    for(int &element:v)
    {
        element = i;
        i++;
    }

    cout<<"Vector: ";

    for(int e:v)
    {
        cout<<e<<" ";
    }


    // reversing the vector
    

    reverse(v.begin() , v.end());
    reverse(v.begin() , v.begin() + k);
    reverse(v.begin() + k , v.end());

    cout<<"\nRotated Vector: ";

    for(int e:v)
    {
        cout<<e<<" ";
    }


    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;

    int size;
    cout<<"Enter number of elements: ";
    cin>> size;

    v.resize(size);
    cout<<"Enter elements: ";
    for(int &element:v)
    {
        cin>>element;
    }

    // traverse through the vector

    for(int element:v)
    {
        cout<<element<<" ";
    }

    cout<<endl;

    // to find the last occurance of the element in the vector
    cout<<"Last Element of the vector: "<<v[size-1]<<endl;

    // to find the number of occurances of element x
    int counter = 0;
    int key;
    cout<<"Enter the element u want to find the occurance of: ";
    cin>>key;

    for(int element:v)
    {
        if(element == key) counter++;

    }

    cout<<"Number of occurances: "<<counter;

    // vector operations summary:
    // v.size()
    // v.resize()
    // v.capacity()

    // v.push_back(element)
    // v.pop_back()
    // v.insert( v.begin() + index, element)
    // v.erase( v.end() - position ) ex if position is 2 ..2nd element from last will be deleted
    // v.clear()  deletes the whole vector
    return 0;
}
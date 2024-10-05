#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // vectors are dynamic arrays.
    // vectors can be resized
    //contigous memory allocation

    // Declaring a vector
    // vector <datatype> vector-name;
    // vector <datatype> vector-name(size);

    vector <int> v;
    // int length = v.size();
    // cout<<"Length: "<<length<<endl<<"Size: "<<sizeof(v)<<endl;

    // // resizing a vector

    // v.resize(10);
    // cout<<"Length: "<<v.size()<<endl<<"Size: "<<sizeof(v)<<endl;

    // v.resize(100);
    // cout<<"Length: "<<v.size()<<endl<<"Size: "<<sizeof(v)<<endl;


    // CAPACITY of a vector
    // note: capacity of a vector will be always equal or greater than size
    // capacity >= size

    vector <int> vec;

    // cout<<"Vector size: "<< vec.size()<<endl;
    // cout<<"Vector capacity: "<< vec.capacity()<<endl;
    // // size and capacity are both 0

    // vec.resize(10);
    // cout<<"Vector size: "<< vec.size()<<endl;
    // cout<<"Vector capacity: "<< vec.capacity()<<endl;

    // vec.resize(20);
    // cout<<"Vector size: "<< vec.size()<<endl;
    // cout<<"Vector capacity: "<< vec.capacity()<<endl;


    // ADDING ITEMS IN VEECTORS

    // v.push_back(1) ...pushes 1 in the end
    // v.pop_back() ... removes the last element
    // v.insert( v.begin() + 2 , element) ..item will be inserted at 3rd place or the 2nd index.
    // v.erase( v.end() - 2);  ...2nd item from last will be deleted
    cout<<"Size: "<<v.size()<<"\nCapacity: "<<v.capacity()<<endl;
    v.push_back(1);

    cout<<"Size: "<<v.size()<<"\nCapacity: "<<v.capacity()<<endl;
    v.push_back(2);

    cout<<"Size: "<<v.size()<<"\nCapacity: "<<v.capacity()<<endl;
    v.push_back(3);

    cout<<"Size: "<<v.size()<<"\nCapacity: "<<v.capacity()<<endl;
    v.push_back(4);

    cout<<"Size: "<<v.size()<<"\nCapacity: "<<v.capacity()<<endl;
    v.push_back(5);

    cout<<"Size: "<<v.size()<<"\nCapacity: "<<v.capacity()<<endl; 


    // taking input from user

    // when vector size is not defined

    vector <int> vec1;
    for(int i = 0; i< 5 ; i++)
    {
        int element;
        cin>>element;
        vec1.push_back(element);
    }

    // when vector size is defined

    vector <int> vec2(5);
    for(int i = 0; i< 5 ; i++)
    {
        cin>>vec2[i];
    }


    //printing elements of vector

    // for loop
    for(int i = 0; i < vec1.size(); i++)
    {
        cout<<vec1[i]<<" ";  
    }
    return 0;

    // for each loop
    for(int x:vec1)
    {
        cout<<x<<" ";
    }

    // while loop
    int idx = 0;
    while(idx < vec1.size())
    {
        cout<< vec1[idx++]<< " ";
    }
}
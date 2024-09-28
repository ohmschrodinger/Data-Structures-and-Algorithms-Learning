#include <iostream>
using namespace std;

void using_reference(int& ref)
{
    ref = 100;

}

void using_pointer(int* x)
{
    *x = 200;
}
int main()
{
    int x = 5;
    int& ref = x;
    int* ptr = &x;

    if(ptr == &ref)
    {
        cout<<"True";
    }
    cout<<endl;

    using_reference(ref);
    cout << x<< endl;

    using_pointer(ptr);
    cout<< x<<endl;
}
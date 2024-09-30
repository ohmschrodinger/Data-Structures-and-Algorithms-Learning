#include <iostream>
using namespace std;

void add_10(int* x, int ten = 10)
{
    *x =  *x + ten;
}

int main()
{
    int n = 100;
    int* x = &n;

    add_10(x);
    cout<< *x << endl;
    add_10(x,20);
    cout<< *x << endl;
    add_10(x,30);
    cout<< *x << endl;

    return 0;
}
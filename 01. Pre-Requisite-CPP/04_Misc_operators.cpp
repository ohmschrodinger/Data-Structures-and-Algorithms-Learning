#include <iostream>
using namespace std;

int main()
{    
    // comma operator
    int a = 5, b = 10;
    int result = (a += 2, b += 3);  // Increment a, then increment b and return b's value
    // in comma operator both the operations are performed with the result of the second expression being returned
    cout << "a: " << a << ", b: " << b << ", result: " << result << endl;
        

    //sizeof() operator
    int x = 50;
    cout << sizeof(x)<< endl;


    //  ternary operator
    // condition? true : false
    (2>1)? cout<<"True" : cout <<" False";
    cout<<"\n";


    // dot (.) and arrow (->) operator : used in classes and pointers


    // typecasting operators
    float  q = 100.555;
    // int p = int(q);
    int p = (int)q;
    cout<<"P: " <<p << endl;
    int m = 20;
    float n = (float)m * 1.598;
    cout<<"N: " << n<< endl;

    //  & operator : gives the address of a variable

    // * operator : pointers
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;
    
    int remainder =0;
    int i =0;
    int dec= 0;
    while(n>0)
    {
        remainder = n % 10;
        dec = dec + (remainder * pow(2,i));
        i++;
        n = n/10;
    }

    cout<<"Decimal: ";
    cout<<dec;
    return 0;
}
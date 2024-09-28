#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int new_num=0, remainder;
    while(n>0){
        remainder = n%10;
        new_num = (new_num + remainder) * 10;
        n /= 10;
    }
    new_num /= 10;
    cout<<new_num;
    return 0;
}
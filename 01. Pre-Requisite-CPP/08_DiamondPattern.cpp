#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter n: ";
    int n;
    cin>>n;

    for(int i = 1 ; i<= 2*n - 1; i++)
    {
        if(i<= (2*n+1)/2)
        {
        for(int j = 1; j<= n-i;j++)
        {
            cout<<" ";
        }
        for(int j = 1 ; j <= 2*i - 1 ; j++)
        {
            cout<<(char)('A' + j-1);
        }
        }

        else{
        for(int j = n+1; j<= i;j++)
        {
            cout<<" ";
        }
        for(int j = 1 ; j <= 2*(2*n - i) -1 ; j++)
        {
            cout<<(char)('A' + j-1);
        }
            
        }

        cout<<"\n";
    }
    return 0;
}
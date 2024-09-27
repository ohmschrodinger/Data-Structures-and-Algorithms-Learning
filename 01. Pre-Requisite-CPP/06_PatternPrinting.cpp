#include <iostream>
using namespace std;

int main()
{
    int r,c;
    cout<<"Enter the number of rows and columns: ";
    cin>>r>>c;

    cout<<"Box Pattern: "<<endl;
    for(int i = 1; i<=r;i++)
    {
        for(int j = 1 ; j <= c ; j++)
        {
            if(i == 1 || i == r)
            {
                cout<<" *";
            }

            else if(j == 1 || j == c)
            {
                cout<<" *";
            }

            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    cout<<"\nTriangle Pattern: (lower triangular matrix) "<<endl;
    for(int i = 1; i<=r;i++)
    {
        for(int j = 1 ; j <= c ; j++)
        {
            if(i>=j)
            {
                cout<<" *";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
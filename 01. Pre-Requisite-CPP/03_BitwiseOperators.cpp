#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = 10;

    int x_complement  = ~x;
    int y_complement  = ~y;

    cout<< "x complement: " << x_complement << endl;
    cout<< "y complement: " << y_complement << endl;

    // 5 in binary is 00000000 00000000 00000000 00000101
    // (32 bits)   
    // therefore complement of 5 will be 11111111 11111111 11111111 11111010

    cout<<"_Binary shift_";

    int a = 5;
    int b = 10;

    //  << is left shift
    //  >> is right shift

    // a<<1 means a gets shfited by 1 place
    // general formula: a << b = a * 2^b 
    // general formula: a >> b = a / 2^b 

    cout<<"Left shift for 5: " << (a<<1) << endl;
    cout<<"Right shift for 5: " << (a>>1) << endl;

    cout<<"Bitwise AND OR XOR" << endl;

    // bitwise or: |
    // bitwise and: &
    // bitwise xor: ^

    // ex 1010 | 0101 = 1111
    // ex 1010 & 0101 = 0000
    // ex 1010 ^ 0101 = 1010
    return 0;
}
#include <iostream>
using namespace std;


class SimpleInterest{
    public:
        float p,r,t;
        float si;

        void Calc_SI(float p, float r, float t)
        {
            si = p*r*t / 100;

            cout<<"Simple Interest is: "<<si;
        }
};


int main()
{
    SimpleInterest person1;
    person1.p = 100;
    person1.r = 5;
    person1.t = 10;

    person1.Calc_SI(person1.p , person1.r , person1.t);

    
    return 0;
}
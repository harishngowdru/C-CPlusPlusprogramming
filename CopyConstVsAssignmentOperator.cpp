
#include<iostream>
#include<stdio.h>

using namespace std;

class test
{

public:
    test(){}
    test(const test &t)
    {
        cout<<"Copy constructor called"<<endl;
    }
    test& operator = (test &t)
    {
        cout<<"Assignement Operator called"<<endl;
        return *this;
    }

};

int main()
{

    test t1, t2;
    t1=t1;
    test t3=t2;
    return 0;
}

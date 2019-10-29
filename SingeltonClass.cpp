#include <iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class singelton
{
    static int x;

    static singelton *Instance;
    singelton()
    {
        cout<<"Constructor called"<<endl;
    }
public:

    static singelton* getinstance()
    {
        if(Instance)
        {
            Instance = new singelton();
        }
        return Instance;
    }

    void sayhi()
    {
        cout<<"Hello From singelton"<<endl;
    }
};


/*Intialise pointer to zero indicating no object is cerated*/
singelton *singelton::Instance = 0;
int singelton::x = 10;
int main()
{

    cout<<"hello ng"<<endl;

    singelton *p = singelton::getinstance();
    p->sayhi();
return 0;
}

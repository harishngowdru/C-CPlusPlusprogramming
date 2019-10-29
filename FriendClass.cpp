
// CPP program to demonstrate multithreading
// using three different callables.
#include <iostream>
#include <memory>
using namespace std;

class a
{
char *name;
 void fun1();//private friend function

public:
a():name("harish"),pname("Harish N G"){}
 void fun2();//private friend function
  friend class b;
protected:
    char *pname;
};

void a::fun1()
{
    cout<<"hello from fun1"<<endl;
}
void a::fun2()
{
    cout<<"hello from fun2"<<endl;
}

class b
{
public:
void sayhello()
{
    a obj;
    obj.fun1();
    obj.fun2();
}
};


int main()
{
    b obj;
    obj.sayhello();
	return 0;
}


// CPP program to demonstrate multithreading
// using three different callables.
#include <iostream>
#include <memory>
using namespace std;

class a
{
char *name;
friend void frndfun(a);//private friend function
public:
a():name("harish"),pname("Harish N G"){}
friend void pubfrndfun(a);//private friend function
protected:
    char *pname;
};

void frndfun(a obj)//friend function accepts object of class as parameter
{
 cout<<"Hello "<<obj.name<<" "<<obj.pname<<endl;
}
void pubfrndfun(a obj)//friend function accepts object of class as parameter
{
 cout<<"Hello "<<obj.name<<" "<<obj.pname<<endl;
}

int main()
{
    a obj;
    frndfun(obj);
    pubfrndfun(obj);
	return 0;
}

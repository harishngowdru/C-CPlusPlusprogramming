
/* CPP program to demonstrate operator overloading

it creates a function with operator as convention instead of function name which makes function name look simple and easy based on logic used
syntax:: <returntype> operator <overloaded operator> (parameters based on requirements)

operators like sizeof, ::, . , ?:, ~ cant be overloaded because of complexity
*/
#include <iostream>
#include <memory>
using namespace std;
class student
{
    int marks ,regno;


public:
    student():marks(0),regno(0){}
    void read_deatils()
    {
        cout<<"enter reg no and marks"<<endl;
        cin>>regno>>marks;
    }
    void show_details()
    {
    cout<<"Register no is "<<regno<<endl;
    cout<<"Total Marks is "<<marks<<endl;
    }

    void operator +=(int updatedMarks)
    {
        marks=marks+updatedMarks;
        if(marks>100)
            marks=100;
    }
    void operator ==(student obj)
    {
        if(marks==obj.marks)
            cout<<"Both have same marks"<<endl;
        else
            cout<<"Not Same"<<endl;

    }
    void operator >(student obj)
    {
        if(marks>obj.marks)
            cout<<"Calling object has more marks"<<endl;
    }
        void operator <(student obj)
    {
        if(marks<obj.marks)
            cout<<"Calling object has less marks"<<endl;
    }
    void operator ++()//(int) required to make it has post fix
    {
        marks++;
    }
};


int main()
{
    student s1,s2;
    s1.read_deatils();
    s2.read_deatils();
    s1.show_details();
    s2.show_details();
    s1+=10; //s1.+=(10)
    ++s2;//for s2++ post fix
    s1==s2;//s1.==(s2)
    s1>s2;//s1.>(s2)
    s1<s2;//s1.<(s2)
	return 0;
}

/*\
Read the Prefix expression in reverse order (from right to left)
If the symbol is an operand, then push it onto the Stack
If the symbol is an operator, then pop two operands from the Stack
Create a string by concatenating the two operands and the operator between them.
string = (operand1 + operator + operand2)
And push the resultant string back to Stack
Repeat the above steps until end of Prefix expression.*/#include<iostream>
#include<stack>
using namespace std;

bool checkoperator(char p)
{
    switch(p)
    {
    case '+':
    case '-' :
    case '/':
    case '*':
        return true;
    }
    return false;
}

string preToInfix(string prefix_exp)
{
    stack<string> s;
    int length = prefix_exp.size();
    for(int i=length-1; i>=0;i--)
    {
        if(checkoperator(prefix_exp[i]))
        {
            string s1=s.top(); s.pop();
            string s2=s.top(); s.pop();
            string s3 ="("+s1+prefix_exp[i]+s2+")";
            s.push(s3);
        }
        else
        {
            s.push(string(1,prefix_exp[i]));
        }
    }
    return s.top();
}

int main()
{
    cout<<"Hello"<<endl;
    string pre_exp = "*-A/BC-/AKL";
    cout<< "Infix : " << preToInfix(pre_exp);

}



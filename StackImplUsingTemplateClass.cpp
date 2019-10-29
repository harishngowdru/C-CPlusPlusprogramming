#include<iostream>
using namespace std;

template<class T>
class TemplateStack
{
     struct Node
    {
        T data;
        Node *Next;
    };
    int stack_size;
    Node* Head;
public:
    TemplateStack():stack_size(0),Head(nullptr){}

    void push(T data);
    void pop();
    bool isStackempty();
    void display();

};

template<class T>
void TemplateStack<T>::push(T data)
{
    Node* NewElement= new Node();
    NewElement->data=data;
    stack_size++;

    if(Head==nullptr)
    {
        Head=NewElement;
    }
    else
    {
        NewElement->Next=Head;
        Head=NewElement;
    }

}

template<class T>
void TemplateStack<T>::pop()
{
    try
    {
        string x="stackisempty";
    if(isStackempty()!=true)
    {
        Node * temp=Head;
        Head=Head->Next;
        delete temp;
        temp=nullptr;
        stack_size--;
    }
    else
    {
        throw x;
    }
    }
    catch(string)
    {
        cout<<"Stack is empty"<<endl;
    }
}
template<class T>
bool TemplateStack<T>::isStackempty()
{
    if(stack_size==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
template<class T>
void TemplateStack<T>::display()
{
    Node * Temp=Head;
    while(Temp !=nullptr)
    {
        cout<<Temp->data<<endl;
        Temp=Temp->Next;
    }
}

int main()
{
    TemplateStack<int> Stack;
    Stack.push(10);
    Stack.push(20);
    Stack.push(30);
    Stack.display();
    Stack.pop();
    Stack.display();
    Stack.pop();
    Stack.pop();
    Stack.pop();
    return 0;
}

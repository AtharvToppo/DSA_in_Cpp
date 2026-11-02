//Implementation of a stack with the help of a linked list.
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};

//Implement stack with linked list
class Stack
{
    Node *top;
    int size;
    
    public:
    Stack()
    {
        top=NULL;
        size=0;
    }
    
    // push operation
    void push(int value)
    {
        Node *temp = new Node(value);
        if(temp==NULL)
        {
            cout<<"Stack overflow!";
            return;
        }
        else
        {
            temp->next = top;
            top=temp;
            size++;
            cout<<"Pushed "<<top->data<<" into the stack."<<endl;
        }
    }
    
    // pop operation
    void pop()
    {
        if(top==NULL)
        {
            cout<<"Stack underflow!"<<endl;
            return;
        }
        else
        {
            Node *temp=top;
            cout<<"Poped "<<top->data<<" from the stack."<<endl;
            top=top->next;
            delete temp;
            size--;
        }
    }
    
    // peek operation
    int peek()
    {
        if(top==NULL)
        {
            cout<<"Stack is empty."<<endl;
            return -1;
        }
        else
        {
            return top->data;
        }
    }
    
    // Isempty operation
    bool Isempty()
    {
        return top==NULL;
    }
    
    // Issize operation
    int Issize()
    {
        return size;
    }
    
};

int main()
{
    Stack s;
    s.push(6);
    s.push(7);
    s.push(69);
    
    s.pop();
    
    cout<<s.Isempty()<<endl;
    cout<<s.Issize()<<endl;
    cout<<s.peek()<<endl;
}

// Implement a queue using a linked list !!!
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

class Queue
{
    Node *front;
    Node *rear;
    
    public:
    Queue()
    {
        front=rear=NULL;
    }
    
    // Queue is empty or not
    bool IsEmpty()
    {
        return front==NULL;
    }
    
    // Push operation
    void Push(int x)
    {
        if(IsEmpty())
        {
            cout<<"Pushed "<<x<<" into the Queue"<<endl;
            front =rear= new Node(x);
            return;
        }
        else
        {
            cout<<"Pushed "<<x<<" into the Queue"<<endl;
            rear->next=new Node(x);
            rear=rear->next;
        }
    }
    
    // Pop operation
    void Pop()
    {
        if(IsEmpty())
        {
            cout<<"Queue is Underflow"<<endl;
            return;
        }
        else
        {
            cout<<"Poped "<<front->data<<" from the Queue"<<endl;
            Node *temp=front;
            front=front->next;
            delete temp;
        }
    }
    
    // Return the starting element of the Queue
    int start()
    {
        if(IsEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else
        {
            return front->data;
        }
    }
};
int main()
{
    Queue q;

    q.Push(2);
    q.Push(3);
    q.Push(4);
    
    q.Pop();
    
    q.Push(5);
    q.Push(6);
    
    q.Pop();
    
    q.Push(7);
    
    cout<<q.start();
}

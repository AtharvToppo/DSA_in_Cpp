// Queue using Array !!!
#include<iostream>
using namespace std;

class Queue
{
    int *arr;
    int front, rear, size;
    
    public:
    Queue(int n)
    {
        arr=new int[n];
        front=rear=-1;
        size=n;
    }
    
    // Queue is empty or not
    bool IsEmpty()
    {
        return front==-1;
    }
    
    // Queue is full or not
    bool Isfull()
    {
        return rear==size-1;
    }
    
    // Push operation
    void Push(int x)
    {
        if(IsEmpty())
        {
            front=rear=0;
            arr[front]=x;
            cout<<"Pushed "<<x<<" into the Queue"<<endl;
        }
        else if(Isfull())
        {
            cout<<"Queue is Overflow";
            return;
        }
        else
        {
            rear=rear+1;
            arr[rear]=x;
            cout<<"Pushed "<<x<<" into the Queue"<<endl;
        }
    }
    
    // Pop operation
    void Pop()
    {
        if(IsEmpty())
        {
            cout<<"Queue is Underflow";
            return;
        }
        else
        {
            if(front==rear)
            {
                cout<<"Poped "<<arr[front]<<" from the Queue"<<endl;
                front=rear=-1;
            }
            else
            {
                cout<<"Poped "<<arr[front]<<" from the Queue"<<endl;
                front=front+1;
            }
        }
    }
    
    // Return the starting element of the Queue
    int start()
    {
        if(IsEmpty())
        {
            cout<<"Queue is empty";
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
};
int main()
{
    Queue q(5);
    q.Push(1);
    q.Push(2);
    q.Push(3);
    
    q.Pop();
    q.Pop();
    
    
    int a=q.start();
    if(!q.IsEmpty())
    {
        cout<<a<<endl;
    }
    
    
}

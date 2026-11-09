//Implementation of Deque using an array!!
#include<iostream>
using namespace std;

class Deque
{
    int *arr;
    int front, rear, size;
    
    public:
    Deque(int n)
    {
        size=n;
        arr=new int[n];
        front=rear=-1;
    }
    
    bool Isempty()
    {
        return front==-1;
    }
    
    bool Isfull()
    {
        return (rear+1)%size==front;
    }
    
    void Push_front(int x)
    {
        if(Isempty())
        {
            front=rear=0;
            arr[0]=x;
            cout<<"Pushed "<<x<<" into the deque from the front"<<endl;
            return;
        }
        else if(Isfull())
        {
            cout<<"Deque is Overflow"<<endl;
            return ;
        }
        else
        {
            front=(front-1+size)%size;
            arr[front]=x;
            cout<<"Pushed "<<x<<" into the deque from the front"<<endl;
        }
    }
    
    void Push_back(int x)
    {
        if(Isempty())
        {
            front=rear=0;
            arr[0]=x;
            cout<<"Pushed "<<x<<" into the deque from the back"<<endl;
            return;
        }
        else if(Isfull())
        {
            cout<<"Deque is Overflow"<<endl;
            return;
        }
        else
        {
            rear=(rear+1)%size;
            arr[rear]=x;
            cout<<"Pushed "<<x<<" into the deque from the back"<<endl;
        }
    }
    
    void Pop_front()
    {
        if(Isempty())
        {
            cout<<"Deque is Underflow"<<endl;
            return;
        }
        else
        {
            cout<<"Poped "<<arr[front]<<" from the front"<<endl;
            if(front==rear)
            {
                front=rear=-1;
                return;
            }
            else
            {
                front=(front+1)%size;
            }
        }
    }
    
    void Pop_back()
    {
        if(Isempty())
        {
            cout<<"Deque is Underflow"<<endl;
            return;
        }
        else
        {
            cout<<"Poped "<<arr[rear]<<" from the back"<<endl;
            if(front==rear)
            {
                front=rear=-1;
                return;
            }
            else
            {
                rear=(rear-1+size)%size;
            }
        }
    }
    
    int start()
    {
        if(Isempty())
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
    
    int end()
    {
        if(Isempty())
        {
            return -1;
        }
        else
        {
            return arr[rear];
        }
    }
};
int main()
{
    Deque d(5);
    
    d.Push_front(1);
    d.Push_front(2);
    d.Push_front(3);
    
    d.Pop_back();
    
    d.Push_back(4);
    d.Push_back(5);
    
    d.Pop_front();
    d.Pop_front();
    
    d.Push_back(6);
    d.Push_back(7);
    d.Push_back(8);
    d.Push_back(9);
    
    d.Pop_back();
    d.Pop_back();
    
    cout<<d.start()<<endl;
    cout<<d.end()<<endl;
    
    d.Pop_back();
    d.Pop_back();
    
    d.Pop_front();
    d.Pop_back();
    
}
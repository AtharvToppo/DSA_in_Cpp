//Implementation of Deque using a linked list !!
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *prev,*next;
    
    Node(int value)
    {
        data=value;
        prev=next=NULL;
    }
};

class Deque
{
    Node *front,*rear;
    
    public:
    Deque()
    {
        front=rear=NULL;
    }
    
    void Push_front(int x)
    {
        if(front==NULL)
        {
            front=rear=new Node(x);
            cout<<"Pushed "<<x<<" into the deque from the front"<<endl;
        }
        else
        {
            Node *temp=new Node(x);
            temp->next=front;
            front->prev=temp;
            front=temp;
            cout<<"Pushed "<<x<<" into the deque from the front"<<endl;
        }
    }
    
    void Push_back(int x)
    {
        if(front==NULL)
        {
            front=rear=new Node(x);
            cout<<"Pushed "<<x<<" into the deque from the back"<<endl;
        }
        else
        {
            Node *temp=new Node(x);
            rear->next=temp;
            temp->prev=rear;
            rear=temp;
            cout<<"Pushed "<<x<<" into the deque from the back"<<endl;
        }
    }
    
    void Pop_front()
    {
        if(front==NULL)
        {
            cout<<"Deque is empty"<<endl;
            return;
        }
        else
        {
            cout<<"Poped "<<front->data<<" from the deque (front)"<<endl;
            Node *temp=front;
            front=front->next;
            delete temp;
            
            if(front!=NULL)
            {
                front->prev=NULL;
            }
            else
            {
                rear=NULL;
            }
        }
    }
    
    void Pop_back()
    {
        if(front==NULL)
        {
            cout<<"Deque is empty"<<endl;
            return;
        }
        else
        {
            cout<<"Poped "<<rear->data<<" from the deque (back)"<<endl;
            Node *temp=rear;
            rear=rear->prev;
            delete temp;
            
            if(rear!=NULL)
            {
                rear->next=NULL;
            }
            else
            {
                front=NULL;
            }
        }
    }
    
    int start()
    {
        if(front==NULL)
        {
            return -1;
        }
        else
        {
            return front->data;
        }
    }
    
    int end()
    {
        if(front==NULL)
        {
            return -1;
        }
        else
        {
            return rear->data;
        }
    }
};
int main()
{
    Deque d;
    
    d.Push_front(1);
    d.Push_front(2);
    d.Push_front(3);
    
    d.Pop_back();
    
    d.Push_back(4);
    d.Push_back(5);
    
    d.Pop_front();
    
    d.Pop_front();
    
    int element = d.start();
    if(element<0)
    {
        cout<<"Deque is empty"<<endl;
    }
    else
    {
        cout<<"Starting element in Deque is "<<element<<endl;
    }
    
    d.Push_front(6);
    
    int element1 = d.end();
    if(element1<0)
    {
        cout<<"Deque is empty"<<endl;
    }
    else
    {
        cout<<"Ending element in Deque is "<<element1<<endl;
    }
    
}

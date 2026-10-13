// Creating a node of a linked list !!!
#include<iostream>
using namespace std;

class NODE
{
    public:
    int data;
    NODE *next;
    
    NODE(int value)
    {
        data=value;
        next=NULL;
    }
};

int main()
{
    NODE *Head;
    Head = new NODE(7);
    
    cout<<Head->data<<endl;
}
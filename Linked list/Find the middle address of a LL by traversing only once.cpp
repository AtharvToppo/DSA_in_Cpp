// Find the middle address of a linked list (with the help of a slow pointer and fast pointer) !!!

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

Node * Createlinkedlist(int arr[],int index,int size)
{
    // Base case
    if(index==size)
    {
        return NULL;
    }
    Node *temp;
    temp = new Node(arr[index]);
    temp->next=Createlinkedlist(arr,index+1,size);
    
    return temp;
}

int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<"Element of array:\n";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    Node *Head=NULL;
    Head=Createlinkedlist(arr,0,5);
    
    
    cout<<endl<<"Elements of the linked list:\n";
    // Print the linked list
    Node *temp=Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

    // Middle address of a linked list by slow and fast pointer
    Node *slow = Head;
    Node *fast = Head;
    
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    cout<<endl<<"Data-"<<slow->data<<" Address-"<<slow<<endl;
    
    
    
}
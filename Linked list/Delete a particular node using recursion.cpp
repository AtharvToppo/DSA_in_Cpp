// Delete a particular node of the linked list using recursion !!!

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

Node * delnode(int x,Node *curr)
{
    // Base case
    if(x==1)
    {
        Node *dtemp=curr->next;
        delete curr;
        
        return dtemp;
    }
    
    curr->next = delnode(x-1,curr->next);
    return curr;
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
    
    int x=3; // x = position for delete a node
    // Delete a particular node using recursion
    if(x==1)
    {
        Node *temp1=Head;
        Head=Head->next;
        delete temp1;
    }
    else
    {
        delnode(x,Head);
    }
    
    
    cout<<endl<<"Elements of the linked list:\n";
    // Print the linked list
    Node *temp=Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
  
}
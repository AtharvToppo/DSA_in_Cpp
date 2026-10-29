// Creating a doubly linked list using recursion!!!
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next=NULL;
    Node *prev=NULL;
    
    Node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;
    }
};

Node * createdll(int arr[],int index,int size,Node *back)
{
    // Base case
    if(index==size)
    {
        return NULL;
    }
    
    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = createdll(arr,index+1,size,temp);
    return temp;
    
}

int main()
{
    int arr[5]={1,2,3,4,5};
    
    cout<<"Elements in an array:\n";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // Creating a linked list using recursion
    Node *head = NULL;
    
    head = createdll(arr,0,5,NULL);
    
    cout<<"Elements of a linked list:\n";
    // Print the linked list
    Node *trav = head;
    while(trav!=NULL)
    {
        cout<<trav->data<<" ";
        trav=trav->next;
    }
}
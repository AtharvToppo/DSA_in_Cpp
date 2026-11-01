// Deletion in a doubly linked list (at any particular position) !!!
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

Node *createdll(int arr[],int index,int size,Node *back)
{
    // Base case
    if(index==size)
    {
        return NULL;
    }
    Node *newtemp =  new Node(arr[index]);
    newtemp->prev = back;
    newtemp->next = createdll(arr,index+1,size,newtemp);
    
    return newtemp;
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
    
    
    Node *head = NULL;
    head = createdll(arr,0,5,NULL);
    
    // Delete at any particular position in a doubly linked list
    
    int position=3;
    
    if(position==1) // delete only start node
    {
        // only a single node exists
        if(head->next==NULL)
        {
            delete head;
            head=NULL;
        }
        // more than one node exists
        else
        {
            Node *temp = head;
            head=head->next;
            head->prev=NULL;
            delete temp;
        }
    }
    // if more than one node is present
    else
    {
        Node *curr=head;
        while(--position)
        {
            curr=curr->next;
        }
        // delete end node
        if(curr->next==NULL)
        {
            curr->prev->next=NULL;
            delete curr;
        }
        // delete at any position
        else
        {
            curr->prev->next=curr->next;
            curr->next->prev=curr->prev;
            delete curr;
        }
    }
    
    cout<<"Elements of a linked list:\n";
    // Print the linked list
    Node *trav = head;
    while(trav!=NULL)
    {
        cout<<trav->data<<" ";
        trav=trav->next;
    } 
}
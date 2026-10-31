//Deletion in a doubly linked list (from the end position) !!!
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
    
    // Delete from end position in a doubly linked list
    
    if(head!=NULL)
    {
        // if only a single node is present
        if(head->next==NULL)
        {
            delete head;
            head=NULL;
        }
        // if more than one node is present
        else
        {
            Node *curr=head;
            while(curr->next!=NULL)
            {
                curr=curr->next;
            }
            curr->prev->next=NULL;
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
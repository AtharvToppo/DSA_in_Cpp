// Insertion at any particular position in a doubly linked list !!!
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
    
    //Insert a node at any particular position in a linked list
    
    int position = 5;
    int value = 6;
    
    // insert at beginning
    if(position==0)
    {
        // linked list does not exist
        if(head == NULL)
        {
            head = new Node(value);
        }
        // linked list exists
        else
        {
            Node *temp = new Node(value);
            temp->next = head;
            head->prev = temp;
            head=temp;
        }
    }
    
    else
    {
        Node *curr = head;
        while(--position)
        {
            curr=curr->next;
        }
        // insert at end
        if(curr->next==NULL) // last Node
        {
            Node *temp=new Node(value);
            curr->next = temp;
            temp->prev = curr;
        }
        // insert at any position
        else
        {
            Node *temp = new Node(value);
            temp->next = curr->next;
            curr->next = temp;
            temp->prev = curr;
            temp->next->prev = temp;
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
// Creating a doubly linked list while inserting values from the end !!!
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

int main()
{
    int arr[5]={1,2,3,4,5};
    
    cout<<"Elements in an array:\n";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // Creating linked list
    Node *head = NULL;
    Node *tail = NULL;
    
    for(int i=0;i<5;i++)
    {
        // linked list does not exist
        if(head==NULL)
        {
            head = new Node(arr[i]);
            tail=head;
        }
        // linked list exists
        else
        {
            Node *temp = new Node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail=temp;
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
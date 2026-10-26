// Insertion in a doubly linked list from the beginning !!!
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
    
    // Insertion in a linked list from the starting position
    Node *head = NULL;
    
    for(int i=0;i<5;i++)
    {
        // linked list does not exist
        if(head==NULL)
        {
            head = new Node(arr[i]);
        }
        // linked list exists
        else
        {
            Node *temp = new Node(arr[i]);
            temp->next = head;
            head->prev = temp;
            head = temp;
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
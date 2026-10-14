// Insert a node at the end of a linked list !!!

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

int main()
{
    int arr[4]={1,2,3,4};
    cout<<"Element of array:\n";
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // Insert a node at the end of the linked list
    Node *Head=NULL;
    Node *Tail=NULL;
    
    for(int i=0;i<4;i++)
    {
        // If the linked list does not exist
        if(Head==NULL)
        {
            Head = new Node(arr[i]);
            Tail=Head;
        }
        // If the linked list already exists
        else
        {
            Tail->next=new Node(arr[i]);
            Tail=Tail->next;
        }
    }
    
    //Print the linked list
    cout<<"Elements of linked list:\n";
    
    /*
    We use a temp pointer because if we use Head, then the Head points to the
    last node of the linked list, and if we want to access the first node, 
    then we do not have its pointer. So we use a temp pointer to print the 
    elements of the linked list.
    */
    
    Node *temp=Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
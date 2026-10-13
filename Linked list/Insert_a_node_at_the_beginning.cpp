// Insert a node at the beginning of a linked list !!!
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
    int arr[5]={1,2,3,4,5};
    cout<<"Element of array:\n";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    Node *Head;
    Head = NULL;
    // Insert all the elements of the array in the linked list
    for(int i=0;i<5;i++)
    {
        // Insert a node at the beginning
        //If no element is present, then run this
        if(Head==NULL)
        {
            Head = new Node(arr[i]);
        }
    
        //If the element is already present in the LL
        else
        {
            Node *temp;
            temp = new Node(arr[i]);
            temp->next=Head;
            Head=temp;
        }
    }
    
    cout<<"Element of Linked list:\n";
    // Print the element of a linked list
    
    Node *temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
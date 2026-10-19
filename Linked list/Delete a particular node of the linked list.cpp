// Delete a particular node of the linked list !!!

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
    
    int x=3; // x = position for delete a node
    // Delete a particular node
    if(Head!=NULL)
    {
        // delete 1st node
        if(x==1)
        {
            Node *temp1=Head;
            Head=Head->next;
            delete temp1;
        }
        // to delete any node
        else
        {
            Node *curr=Head;
            Node *prev=NULL;
            x--;
            while(x--)
            {
                prev=curr;
                curr=curr->next;
            }
            prev->next=curr->next;
            delete curr;
            
        }
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
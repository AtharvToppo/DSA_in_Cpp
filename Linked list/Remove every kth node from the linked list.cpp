// Remove every kth node from the linked list !!!
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
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Element of array:\n";
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    Node *Head=NULL;
    Head=Createlinkedlist(arr,0,10);
    
    // logic part - Remove every kth node from the linked list
    
    int k=2;
    int count=1;
    
    Node *curr=Head;
    Node *prev=NULL;
    
    while(curr!=NULL)
    {
        if(count==k)
        {
            prev->next=curr->next;
            delete curr;
            
            curr=prev->next;
            count=1;
        }
        else
        {
            prev=curr;
            curr=curr->next;
            count++;
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
    cout<<endl;
    
}
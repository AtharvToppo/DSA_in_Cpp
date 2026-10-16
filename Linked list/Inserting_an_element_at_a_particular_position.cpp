// Inserting an element at a particular position of the linked list !!!

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

Node* Createlinkedlist(int arr[],int index,int size)
{
    // Base case
    if(index==size)
    {
        return NULL;
    }
    Node *temp = new Node(arr[index]);
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
    Head = Createlinkedlist(arr,0,5);
    
    // Inserting element at particular position
    int x=3;
    int value=12;
    
    Node *temp=Head;
    x--;
    
    while(x--)
    {
        temp=temp->next;
    }
    
    Node *temp2= new Node(value);
    temp2->next=temp->next;
    temp->next=temp2;
    
    
    cout<<endl<<"Elements of the linked list:\n";
    // Print the linked list
    Node *printvar=Head;
    while(printvar)
    {
        cout<<printvar->data<<" ";
        printvar=printvar->next;
    }
  
}
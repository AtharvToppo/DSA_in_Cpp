// Find the middle address of a linked list !!!

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
    
    
    cout<<endl<<"Elements of the linked list:\n";
    // Print the linked list
    Node *temp=Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    // Middle address of a linked list

    int count=0;
    Node *middle_temp=Head;
    while(middle_temp)
    {
        count++;
        middle_temp=middle_temp->next;
    }
    
    middle_temp=Head;
    int mid=count/2;
    while(mid--)
    {
        middle_temp=middle_temp->next;
    }
    cout<<endl<<middle_temp->data<<" "<<middle_temp<<endl;

}
// Reverse a linked list !!!

#include<iostream>
#include<vector>
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
    
    // Reverse a linked list
    vector<int>ans; // in this vector store values of ll
    Node *rev_temp=Head;
    while(rev_temp!=NULL)
    {
        // store values of ll in ans vector
        ans.push_back(rev_temp->data);
        rev_temp=rev_temp->next;
    }
    // insert the values of ans vector into ll but in reverse form
    int i=ans.size()-1;
    rev_temp=Head;
    while(rev_temp!=NULL)
    {
        rev_temp->data=ans[i];
        rev_temp=rev_temp->next;
        i--;
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
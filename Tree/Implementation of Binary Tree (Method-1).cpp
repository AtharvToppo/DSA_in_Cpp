// Implementation of Binary Tree (Method-1)
#include<iostream>
#include<queue>
using namespace std;

class Node
{
    public:
    int data;
    Node *left,*right;
    
    Node(int value)
    {
        data=value;
        left=right=NULL;
    }
};

int main()
{
    queue<Node*>q;
    
    int x,first,second;
    cout<<"Enter root element for a Binary tree: ";
    cin>>x;
    
    Node *root=new Node(x);
    q.push(root);
    
    //Build the binary tree
    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        
        //left child
        cout<<"Enter left child of the node "<<temp->data<<" : ";
        cin>>first;
        
        if(first!=-1)
        {
            temp->left=new Node(first);
            q.push(temp->left);
        }
        
        //right child
        cout<<"Enter right child of the node "<<temp->data<<" : ";
        cin>>second;
        
        if(second!=-1)
        {
            temp->right=new Node(second);
            q.push(temp->right);
        }
    }   
}
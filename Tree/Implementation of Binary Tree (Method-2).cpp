// Implementation of Binary Tree (Method-2)
#include<iostream>
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

Node * BinaryTree()
{
    int x;
    cin>>x;
    
    if(x==-1)
    {
        return NULL;
    }
    
    Node *temp=new Node(x);
    // left side
    cout<<"Enter the left child of node "<<x<<": ";
    temp->left=BinaryTree();
    // right side
    cout<<"Enter the right child of node "<<x<<": ";
    temp->right=BinaryTree();
    
    return temp;
}

int main()
{
    cout<<"Enter the root element of a Binary Tree: ";
    Node *root;
    root=BinaryTree();
}
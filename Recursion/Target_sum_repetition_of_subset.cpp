// Target sum repetition of Subset using Recursion !!!
#include<iostream>
using namespace std;

int targetsum(int arr[],int index,int n,int x)
{
    // Base case
    if(index==n)
    {
        return x==0;
    }
    if(index==n || x<0)
    {
        return 0;
    }
    
    return targetsum(arr,index+1,n,x) + targetsum(arr,index,n,x-arr[index]);
    
}

int main()
{
    cout<<"Target sum repetition of subset using Recursion !!!"<<endl;
    int size, target, arr[50];
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements of an Array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter a target: ";
    cin>>target;
    cout<<"Elements of the Array: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    cout<<targetsum(arr,0,size,target);
    
}
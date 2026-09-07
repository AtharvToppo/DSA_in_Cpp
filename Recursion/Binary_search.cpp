// Find the Element in an array using a recursive function (Binary Search)!!!
#include<iostream>
using namespace std;
bool binarysearch(int arr[],int start,int end,int x)
{
    // Base case
    if(start>end)
    {
        return 0;
    }
    
    int mid=start+(end-start)/2;
    if(arr[mid]==x)
    {
        return 1;
    }
    else if(arr[mid]<x)
    {
        return binarysearch(arr,mid+1,end,x);
    }
    else
    {
        return binarysearch(arr,start,mid-1,x);
    }
    
}
int main()
{
    cout<<"Element present in a array or not using Recursive function !!!"<<endl;
    int size,target,arr[50];
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements of an Array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the target element: ";
    cin>>target;
    binarysearch(arr,0,size-1,target);
    if(binarysearch(arr,0,size-1,target)==1)
    {
        cout<<"Element present in an array!!"<<endl;
    }
    else
    {
        cout<<"Element is not present in an array!!"<<endl;
    }
}
// Find an element in an array using a recursive function!!!
#include<iostream>
using namespace std;
bool linearsearch(int arr[],int index,int x,int n)
{
    // Base case
    if(index==n)
    {
        return 0;
    }
    if(arr[index]==x)
    {
        return 1;
    }
    return linearsearch(arr,index+1,x,n);
    
}
int main()
{
    cout<<"Element present in an array or not using Recursive function !!!"<<endl;
    int size, target, arr[50];
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements of an Array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the target element: ";
    cin>>target;
    linearsearch(arr,0,target,size);
    if(linearsearch(arr,0,target,size)==1)
    {
        cout<<"Element present in an array!!"<<endl;
    }
    else
    {
        cout<<"Element is not present in the array!!"<<endl;
    }
}
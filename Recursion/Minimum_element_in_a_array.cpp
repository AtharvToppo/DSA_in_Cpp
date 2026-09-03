// Minimum element in the array using a recursive function!!!
#include<iostream>
using namespace std;
int minelement(int arr[], int index, int n)
{
    //Base case
    if(index==n-1)
    {
        return arr[index];
    }
    return min(arr[index],minelement(arr,index+1,n));
}
int main()
{
    cout<<"Minimum element in the array using Recursive function !!!"<<endl;
    int size,arr[20];
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Minimum element is ";
    cout<<minelement(arr,0,size);
}
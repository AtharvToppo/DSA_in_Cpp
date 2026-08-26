#include <iostream>
using namespace std;
int main()
{
    cout<<"Selection Sort"<<endl;
    int n,arr[100];
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the element in the array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    
    for(int i=0;i<n-1;i++)
    {
        int index=i;
        for(int j=i+1;j<n;j++)
        {
        if(arr[j]<arr[index])
        {
            index=j;
        }
        }
    swap(arr[index],arr[i]);
    }
    cout<<"Sorted Array is ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n,arr[100];
    cout<<"Bubble Sort"<<endl;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the element of the array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Entered element is ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
    cout<<endl;
    
    for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
    cout<<"Sorted array is ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n,arr[100];
    cout<<"Insertion Sort "<<endl;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the element of the array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Unsorted array is ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
   
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
            else
            {
                break;
            }
            
        }
    }
    cout<<endl;
    cout<<"Sorted array is ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
    return 0;
}
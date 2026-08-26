#include <iostream>
using namespace std;
int main()
{
    int n,target,arr[100];
    int mid,count=0;
    cout<<"Binary Search "<<endl;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the element of the array : ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter the Target element : ";
    cin>>target;
    
    int lb=0,ub=n-1;
    
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(arr[mid]==target)
        {
            cout<<"Element found at Index : "<<mid<<endl;
            cout<<"Number of Searching : "<<count;
            break;
        }
    
        else if(arr[mid]<target)
        {
            lb=mid+1;
            count++;
        }
        
        else
        {
            ub=mid-1;
            count++;
        }
        
    }
    if(arr[mid]!=target)
    cout<<"Element not found";
    return 0;
}
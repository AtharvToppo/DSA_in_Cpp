#include <iostream>
using namespace std;
int main()
{
    int n,arr[100];
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter size of array: "<<endl;
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    cout<<"Entered array: ";
    for(int j=0;j<=n-1;j++)
    {
        cout<<arr[j]<<" ";
    }
    
    int temp;
    temp=arr[n-1];
    for(int k=n-1;k>=1;k--)
    {
        arr[k]=arr[k-1];
    }
    cout<<endl<<"Rotate array by clock-wise: ";
    arr[0]=temp;
    for(int l=0;l<=n-1;l++)
    {
        cout<<arr[l]<<" ";
    }
    
    return 0;
}

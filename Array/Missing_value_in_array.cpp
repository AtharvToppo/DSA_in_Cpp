// To find the Missing value in the array
#include <iostream>
using namespace std;
int main() 
{
    int sum=0,num,n,arr[100];
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the element of the array: ";
    for(int i=0;i<n-1;i++)
    cin>>arr[i];
    
    cout<<"Entered array is ";

    for(int i=0;i<n-1;i++)
    cout<<arr[i]<<" ";
    
    cout<<endl;
    for(int j=0;j<n-1;j++)
    {
        sum=sum+arr[j];
    }
    cout<<"Sum of element of the array: "<<sum<<endl;
    num=n*(n+1)/2;
    cout<<"Sum of array's size: "<<num<<endl;
    cout<<"Missing value: "<<num-sum<<endl;
    
    return 0;
}
// Find the Average of the sum of element of the array
#include <iostream>
using namespace std;
int main()
{
    float size,sum=0;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[1000];
    cout<<"Enter the element of the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Element of the Array: ";
    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<" ";
    }
    for(int k=0;k<size;k++)
    {
        sum=sum+arr[k];
    }
    cout<<endl;
    cout<<"Sum of the element of the array: "<<sum<<endl;
    float avg=sum/size;
    cout<<"Average of the array: "<<avg<<endl;
    
    return 0;
}


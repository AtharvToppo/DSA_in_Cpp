// Maximum element in the array using Recursive function!!!
#include<iostream>
using namespace std;
int maxelement(int arr[],int index,int n)
{
    //Base case
    if(index==n-1)
    {
        return arr[index];
    }
    return max(arr[index],maxelement(arr,index+1,n));
}
int main()
{
    cout<<"Maximum element in the array using Recursive function !!!"<<endl;
    int size,arr[20];
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Maximum element is ";
    cout<<maxelement(arr,0,size);
}
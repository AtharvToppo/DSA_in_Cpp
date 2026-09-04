// Product of all the elements in the array using a recursive function!!!
#include<iostream>
using namespace std;
int product(int arr[], int index, int n)
{
    //Base case
    if(index==n)
    {
        return 1;
    }
    return arr[index]*product(arr,index+1,n);
}
int main()
{
    cout<<"Product of all the elements in the array using Recursive function !!!"<<endl;
    int size,arr[20];
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Product of all elements are ";
    cout<<product(arr,0,size);
}
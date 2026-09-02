// Sum of the elements of the array using a recursive function!!!
#include<iostream>
using namespace std;
int sumele(int arr[], int index, int n)
{
    //Base case
    if(index==n)
    {
        return 0;
    }
    return arr[index]+sumele(arr,index+1,n);
}
int main()
{
    cout << "Sum of the elements of the array using Recursive function !!!"<<endl;
    int size,arr[20];
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Sum of elements of the array: ";
    cout<<sumele(arr,0,size);
}
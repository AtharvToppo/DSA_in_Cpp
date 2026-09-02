// Print the elements of the array in reverse using a recursive function!!!
#include<iostream>
using namespace std;
void printrev(int arr[],int index)
{
    //Base case
    if(index==-1)
    {
        return;
    }
    cout<<arr[index]<<" ";
    printrev(arr,index-1);
}
int main()
{
    cout << "Print the elements of the array using a recursive function !!!"<<endl;
    int size,arr[20];
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements of the array:\n";
    printrev(arr,size-1);
}
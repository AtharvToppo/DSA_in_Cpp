// Print the elements of the array using a recursive function!!!
#include<iostream>
using namespace std;
void print(int arr[], int index, int size)
{
    //Base case
    if(index==size)
    {
        return ;
    }
    cout<<arr[index]<<" ";
    print(arr,index+1,size);
}
int main()
{
    cout<<"Print the elements of the array using a recursive function !!!"<<endl;
    int size,arr[20];
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements of the array:\n";
    print(arr,0,size);
}
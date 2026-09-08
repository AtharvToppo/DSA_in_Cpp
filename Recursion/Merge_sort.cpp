// Merge Sort !!!
#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    // creating temp array
    vector<int>temp(end-start+1);
    int left=start,right=mid+1,index=0;
    while(left<=mid && right<=end)
    {
        if(arr[left]<=arr[right])
        {
            temp[index]=arr[left];
            index++,left++;
        }
        else
        {
            temp[index]=arr[right];
            index++,right++;
        }
    }
    // Remaining elements in left Array
    while(left<=mid)
    {
        temp[index]=arr[left];
        index++,left++;
    }
    // Remaining elements in right Array
    while(right<=end)
    {
        temp[index]=arr[right];
        index++,right++;
    }
    // Put the elements of temp array to original array
    index=0;
    while(start<=end)
    {
        arr[start]=temp[index];
        start++,index++;
    }
    
}
void mergesort(int arr[], int start, int end)
{
    // Base case
    if(start==end)
    {
        return ;
    }
    int mid=start+(end-start)/2;
    //left side
    mergesort(arr,start,mid);
    // Right side
    mergesort(arr,mid+1,end);
    // Merge sort logic
    merge(arr,start,mid,end);
}
int main()
{
    cout<<"Merge Sort !!!"<<endl;
    int size,arr[50];
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements of an Array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements of the Array:\n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    int start=0,end=size-1;
    mergesort(arr,start,end);
    cout<<endl<<"Merge sort:\n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
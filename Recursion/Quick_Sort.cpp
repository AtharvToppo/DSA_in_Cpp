// Quick Sort !!!
#include<iostream>
using namespace std;
int partition(int arr[], int start, int end)
{
    int pos=start;
    for(int i=start;i<=end;i++)
    {
        if(arr[i]<=arr[end])
        {
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    // return the index of the pivot element
    return pos-1;
}
void quicksort(int arr[], int start, int end)
{
    // Base case
    if(start>=end)
    {
        return;
    }
    // Pivot element
    int pivot=partition(arr,start,end);
    // left side
    quicksort(arr,start,pivot-1);
    // Right side
    quicksort(arr,pivot+1,end);
}

int main()
{
    cout<<"Quick Sort !!!"<<endl;
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
    quicksort(arr,start,end);
    cout<<endl<<"Quick sort:\n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
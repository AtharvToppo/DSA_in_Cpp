// Find the Index of the specific element of the array
#include <iostream>
using namespace std;
int main()
{
    int n,element,arr[100];
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the element of the array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter the element to find it's index: ";
    cin>>element;
    
    for(int j=0;j<=n;j++)
    {
        if(element==arr[j])
        {
            cout<<"Index of the given element is "<<j;
            return 0;
        }
    }
    cout<<"Element not present in the array "<<endl;
    return 0;
}
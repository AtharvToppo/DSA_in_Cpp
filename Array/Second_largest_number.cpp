// To find the Second Largest number in the array
#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n,arr[100];
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the element of the array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Entered array is ";
    for(int j=0;j<n;j++)
    cout<<arr[j]<<" ";
    cout<<endl;
    int largest=INT_MIN,seclargest=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>largest)
            {
                largest=arr[i];
            }
        }
        cout<<"Largest number is "<<largest<<endl;
        
        for(int j=0;j<n;j++)
        {
            if(arr[j]!=largest)
            {
                if(arr[j]>seclargest)
                {
                    seclargest=arr[j];
                }
            }
        }
        if(seclargest<=0)
        {
            cout<<"Second largest number not present";
            return 0;
        }
        cout<<"Second largest number is "<<seclargest<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter index of fibonacci number: ";
    cin>>n;
    int i,arr[100];
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<=n-1;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<"Fibonacci Number: "<<arr[n-1];
    return 0;
}
// Fibonacci series
// 8 - 1 2 3 4 5 6 7 8
//     0 1 1 2 3 5 8 13
// Search the element in 2D Array.
#include<iostream>
using namespace std;

int main()
{
     cout<<"Search the element in 2D Array!"<<endl;
    int rows,cols,target,arr[10][10];
    cout<<"Enter the rows of the 2D array: ";
    cin>>rows;
    cout<<"Enter the columns of the 2D array: ";
    cin>>cols;
    cout<<"Enter the elements of the 2D array: ";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the target value you want to find: ";
    cin>>target;
    cout<<"Elements of the 2D array:\n";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(arr[i][j]==target)
            {
                cout<<"Element found inn an array!";
                return 0;
            }
        }
    }
    cout<<"Element not found in an array!";
    return 0;
}

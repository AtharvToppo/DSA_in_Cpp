// Transpose of a Matrix only for square matrix.
#include<iostream>
#include <utility>
using namespace std;

int main()
{
    cout<<"Transpose of a Matrix (only for square matrix)!!"<<endl;
    int rows,cols,arr[10][10];
    cout<<"Enter the rows and columns: ";
    cin>>rows>>cols;
    
    cout<<"Enter the elements: ";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    cout<<"Elements of a Matrix:\n";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    // logic for finding transpose of a Matrix (using swap function)
    for(int i=0;i<rows;i++)
    {
        for(int j=i+1;j<cols;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    cout<<"Transpose of a Matrix:\n";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}

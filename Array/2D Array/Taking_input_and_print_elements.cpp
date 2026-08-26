// Taking input and printing elements from the 2D array.
#include <iostream>
using namespace std;

int main()
{
    cout<<"Taking input and printing elements from the 2D Array!"<<endl;
    int rows,cols,arr[10][10];
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
    cout<<"Elements of 2D array:\n";
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
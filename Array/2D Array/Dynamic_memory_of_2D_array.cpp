// Dynamic memeory allocation of 2D Array!!!
#include<iostream>
#include<string>
using namespace std;

int main()
{
    
    int n,m; // n=rows,m=columns
    cout<<"Enter the rows and columns of the array: ";
    cin>>n>>m;
    int **ptr=new int*[n]; // Double pointer which store address of 1D array(rows of array)
    for(int i=0;i<n;i++)
    {
        // creating 1D array(columns of array)
        ptr[i]=new int[m];
    }
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ptr[i][j];
        }
    }
    cout<<"Elements of the array:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // Release the memeory from Heap
    for(int i=0;i<n;i++)
    {
        delete[] ptr[i];
    }
    delete[] ptr;
}
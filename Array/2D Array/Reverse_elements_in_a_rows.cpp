// Elements of the rows in reverse order.
#include<iostream>
using namespace std;

int main()
{
    cout<<"Elements of the rows in reverse order!!"<<endl;
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
    
    cout<<"Elements of the 2D Array:\n";
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
        int temp,start=0,end=cols-1;
        while(start<end)
        {
            // swap the elements to reverse the row elements
            temp=arr[i][start];
            arr[i][start]=arr[i][end];
            arr[i][end]=temp;
            start++,end--;
        }
    }
    
    cout<<"Elements of the rows in reverse:\n";
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

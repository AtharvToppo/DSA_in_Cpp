// Printing the elements in the wave form in a 2D array.
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    cout<<"Wave Problem!!"<<endl;
    int rows,cols;
    cout<<"Enter the rows and columns: ";
    cin>>rows>>cols;
    vector<vector<int>>arr(rows,vector<int>(cols,1));
    
    cout<<"Enter the elements: ";
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
    
    cout<<"Array in wave form:\n";
    for(int i=0;i<cols;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<rows;j++)
            {
                cout<<arr[j][i]<<" ";
            }
        }
        else
        {
            for(int k=rows-1;k>=0;k--)
            {
                cout<<arr[k][i]<<" ";
            }
        }
    }
    return 0;
}

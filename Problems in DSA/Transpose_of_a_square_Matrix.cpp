#include<iostream>
#include<utility>
using namespace std;
int main()
{
    int matrix[10][10];
    int row,col;
    cout<<"Enter the rows and columns of a Matrix: ";
    cin>>row>>col;

    cout<<"Enter the elements of a Matrix: ";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>matrix[i][j];
        }
    }

    cout<<"Elements of a Matrix:\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }

    // Transpose of a Matrix
    for(int i=0;i<row-1;i++)
    {
        for(int j=i+1;j<col;j++)
        {
           swap(matrix[i][j],matrix[j][i]);
        }
    }
    cout<<"Elements of a Transpose Matrix:\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}
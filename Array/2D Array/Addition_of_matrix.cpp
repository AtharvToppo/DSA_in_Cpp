// Addition of two Matrices.
#include<iostream>
using namespace std;

int main()
{
    cout<<"Addition of two Matrix!!"<<endl;
    cout<<"(Enter the same number of rows and columns for adding two matrices)"<<endl;
    int rows,cols,rows2,cols2,mat[10][10],mat2[10][10];
    cout<<"Enter the rows of the first Matrix: ";
    cin>>rows;
    cout<<"Enter the columns of the first Matrix: ";
    cin>>cols;
    cout<<"Enter the elements of the first Matrix: ";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>mat[i][j];
        }
    }
    
    cout<<"Enter the rows of the second Matrix: ";
    cin>>rows2;
    cout<<"Enter the columns of the second Matrix: ";
    cin>>cols2;
    cout<<"Enter the elements of the second Matrix: ";
    for(int i=0;i<rows2;i++)
    {
        for(int j=0;j<cols2;j++)
        {
            cin>>mat2[i][j];
        }
    }
    
    cout<<"Elements of the first Matrix:\n";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    cout<<"Elements of the second Matrix:\n";
    for(int i=0;i<rows2;i++)
    {
        for(int j=0;j<cols2;j++)
        {
            cout<<mat2[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    cout<<"Addition of two Matrix:\n";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            mat[i][j]=mat[i][j]+mat2[i][j];
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    return 0;
}

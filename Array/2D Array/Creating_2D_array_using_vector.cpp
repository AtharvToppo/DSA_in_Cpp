// Creating a 2D array using vector.
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    cout<<"Creating 2D array using vector!!"<<endl;
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
    
    cout<<"Elements of the 2D Array using vector:\n";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    /*
    To find the number of rows and columns in a 2D array, use
    for rows -> array_name.size();
    for columns -> array_name[0].size();
    */
    return 0;
}

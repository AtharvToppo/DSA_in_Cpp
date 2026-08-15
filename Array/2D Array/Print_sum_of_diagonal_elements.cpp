// Print sum of diagonal element.
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    cout<<"Print the sum of the diagonal elements!!"<<endl;
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
    
    int first_sum=0,second_sum=0;
    if(rows!=cols)
    {
        cout<<"Diagonal can not be found because rows and columns are not same!";
    }
    else
    {
        for(int i=0;i<rows;i++)
        {
            first_sum+=arr[i][i];
        }
        int i=0,j=cols-1;
        while(j>=0)
        {
            second_sum+=arr[i][j];
            i++;
            j--;
        }
    }
    cout<<"Sum of first Diagonal is "<<first_sum<<endl;
    cout<<"Sum of second Diagonal is "<<second_sum<<endl;
    return 0;
}

// Print row index with maximum sum.
#include<iostream>
using namespace std;

int main()
{
    cout<<"Print the Row index with Maximum sum!!"<<endl;
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
    
    int max=INT_MIN,row_index=-1;
    for(int i=0;i<rows;i++)
    {
        int sum=0;
        for(int j=0;j<cols;j++)
        {
            sum+=arr[i][j];
        }
        if(sum>max)
        {
            max=sum;
            row_index=i;
        }
    }
    cout<<"Row index is "<<row_index<<endl;
    cout<<"Maximum sum of the row is "<<max<<endl;
    return 0;
}

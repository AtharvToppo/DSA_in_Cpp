#include <iostream>
using namespace std;

// Function for printing elements of 2D array
void printelement(int arr[][3],int row,int col)
{
    //Row wise
    for(int row=0;row<4;row++)
    {
        for(int col=0;col<3;col++)
        cout<<arr[row][col]<<" ";
    }
}
int main()
{
    // Create a 2D array
    int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<"Element in 2D array: ";
    
    // Print all the element in 2D array(row wise)
    printelement(arr,4,3);
    return 0;
}
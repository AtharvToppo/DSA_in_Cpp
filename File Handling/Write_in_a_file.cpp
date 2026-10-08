// File handling!
#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

int main()
{
    int size;
    vector<int>arr(50);
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the element in array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    // To save all the elements in a file
    
    // file open
    ofstream fout;
    
    // open a file and if not present then create it.
    fout.open("temp.txt");
    
    // write to file
    
    for(int i=0;i<size;i++)
    {
        fout<<arr[i]<<" ";
    }
    
    //Close the file to release its resources
    fout.close();
    
}

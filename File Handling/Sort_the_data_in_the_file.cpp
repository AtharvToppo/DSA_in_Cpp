// File handling! (Sort the data in the file)
#include<iostream>
#include<vector>
#include <algorithm>
#include<fstream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    vector<int>arr(size);
    
    cout<<"Enter the elements in the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    // To save all the elements in a file
    
    // file open
    ofstream fout;
    
    // open a file and if not present then create it.
    fout.open("temp1.txt");
    
    fout<<"Orginal data\n";
    // write in file
    
    for(int i=0;i<size;i++)
    {
        fout<<arr[i]<<" ";
    }
    
    fout<<"\nSorted data\n";
    
    // sort the data
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<size;i++)
    {
        fout<<arr[i]<<" ";
    }
    
    //Close the file to release its resources
    fout.close();
    
}
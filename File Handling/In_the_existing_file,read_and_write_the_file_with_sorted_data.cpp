// File handling! (Exercise - In the existing file, read and write the file with sorted data)
#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    
    // Read the File
    ifstream fin;
    //open the File
    fin.open("example.txt");
    
    //Read the file
    vector<int>arr;
    int x;
    while(fin>>x)
    {
        arr.push_back(x);
    }
    
    // close file
    fin.close();
    
    // sort the elements of the file
    ofstream fout;
    
    // open the file
    fout.open("example.txt", ios::app);
    
    // sort the elements
    sort(arr.begin(),arr.end());
    
    fout<<"\nSorted data\n";
    for(int i=0;i<arr.size();i++)
    {
        fout<<arr[i]<<" ";
    }
    
    //close file
    fout.close();
}
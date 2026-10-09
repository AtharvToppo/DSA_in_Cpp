// File handling! (Write and read from a file line by line)
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    // create file object
    ofstream fout;
    
    // open file
    fout.open("test.txt");
    
    // write to file
    fout<<"Hello world!\n";
    fout<<"Haha boys\n";
    fout<<"Hehe\n";
    
    // close the file
    fout.close();
    
    // Read the file
    ifstream fin;
    
    // open file
    fin.open("test.txt");
    
    // read the file
    string line;
    
    // getline() helps read a line of a file
    while(getline(fin,line))
    {
        cout<<line<<endl;
    }
    
    //close the file
    fin.close();
    
}
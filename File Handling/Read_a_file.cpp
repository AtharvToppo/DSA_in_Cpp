// File handling!
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // To read a File
    ifstream fin;
    
    //Open a File
    fin.open("first.txt");
    
    // Read a File
    char c;
    /*
    fin>>c;
    if we write it like this, it only reads the alphabet and skips the other characters.
    */
    c=fin.get(); //By using this, it will read all the characters.
    
    //eof is end of file; it is a function to check the end of file.
    while(!fin.eof())
    {
        cout<<c;
        //fin>>c;
        c = fin.get();
    }
    
    // close the file
    fin.close();
}
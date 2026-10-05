#include<fstream>
using namespace std;

int main()
{
    // file open
    ofstream fout;
    // open a file and if not present then create it.
    fout.open("first.txt");
    // write in file
    fout<<"Hello!!!";
    
    // close the file to release its resources
    fout.close();
    
}
// Check palindrome in a string using a recursive function!!!
#include<iostream>
using namespace std;
bool checkpal(string s,int start,int end)
{
    // Base case
    if(start>=end)
    {
        return 1;
    }
    // Not matched
    if(s[start]!=s[end])
    {
        return 0;
    }
    // Matched
    return checkpal(s,start+1,end-1);
}
int main()
{
    cout << "Check palindrome in a string using Recursive function !!!"<<endl;
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    int start=0,end=s.size()-1;
    checkpal(s,start,end);
    if(checkpal(s,start,end)==1)
    {
        cout<<"String is palindrone!!";
    }
    else
    {
        cout<<"String is not palindrone!!";
    }
}
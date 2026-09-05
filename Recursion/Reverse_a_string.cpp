// Reverse a string using a recursive function!!!
#include<iostream>
using namespace std;
void reverse(string &s,int start,int end)
{
    // Base case
    if(start>=end)
    {
        return;
    }
    
    char c=s[start];
    s[start]=s[end];
    s[end]=c;
    return reverse(s,start+1,end-1);
}
int main()
{
    cout<<"Reverse of a string using Recursive function !!!"<<endl;
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    cout<<"Reverse of string is ";
    int start=0,end=s.size()-1;
    reverse(s,start,end);
    cout<<s;
}
// Lowercase to Uppercase using Recursive function!!!
#include<iostream>
using namespace std;
void lowertoupper(string &s,int index)
{
    // Base case
    if(index==-1)
    {
        return;
    }
    s[index]='A'+s[index]-'a';
    return lowertoupper(s,index-1);
}
int main()
{
    cout<<"Lowercase to Uppercase using Recursive function !!!"<<endl;
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    cout<<"Lowercase to Uppercase of a string is ";
    
    lowertoupper(s,s.size());
    cout<<s;
}
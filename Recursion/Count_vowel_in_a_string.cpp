// Count vowels in a string using a recursive function!!!
#include<iostream>
using namespace std;
int countvol(string s,int index)
{
    // Base case
    if(index==-1)
    {
        return 0;
    }
    if(s[index]=='a'||s[index]=='e'||s[index]=='i'||s[index]=='0'||s[index]=='u')
    {
        return 1+countvol(s,index-1);
    }
    else
    {
        return countvol(s,index-1);
    }
}
int main()
{
    cout<<"Count vowels in a string using Recursive function !!!"<<endl;
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    cout<<"Count of vowels is ";

    cout<<countvol(s,s.size());
}
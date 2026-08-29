// Recursive function (To print odd numbers from 1 to n) passing two parameters
#include<iostream>
using namespace std;
void printodd(int n,int num)
{
    if(n==num)
    {
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    printodd(n+2,num);
}
int main()
{
    cout<<"Printing odd numbers from 1 to n (using Recursive function)"<<endl;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%2==0)
    {
        num--;
    }
    printodd(1,num);
}
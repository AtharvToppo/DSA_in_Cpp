// Recursive function (To print odd numbers from 1 to n)
#include<iostream>
using namespace std;
void printodd(int n)
{
    if(n==1)
    {
        cout<<n<<endl;
        return;
    }
    printodd(n-2);
    cout<<n<<endl;
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
    printodd(num);
}
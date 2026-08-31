#include<iostream>
using namespace std;

int fib(int n)
{
    // Base case
    if(n<=1)
    {
        return n;
    }
    
    return fib(n-1)+fib(n-2);
}

int main()
{
    cout<<"Fibonacci series using Recursive function !!!"<<endl;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    
    cout<<fib(num);
}
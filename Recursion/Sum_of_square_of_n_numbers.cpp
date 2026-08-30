// Recursive function!!! (Sum of squares of n numbers)
#include<iostream>
using namespace std;

int ssq(int n)
{
    // Base case
    if(n==1)
    {
        return 1;
    }
    return n*n+ssq(n-1);
}

int main()
{
    cout<<"Sum of squares of n numbers (using Recursive function)"<<endl;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    
    cout<<"Sum of square of "<<num<<" numbers are "<<ssq(num);
}
// Recursive function!! (Power of 2)
#include<iostream>
using namespace std;

int pow(int n1,int n)
{
    // Base case
    if(n==0)
    {
        return 1;
    }
    if(n==1)
    {
        return n1;
    }
    return n1 * pow(n1,n-1);
}

int main()
{
    cout<<"Power of 2 (using Recursive function)"<<endl;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    
    cout<<pow(2,num);
}
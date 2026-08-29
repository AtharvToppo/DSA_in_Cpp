// Recursive function!! (Sum of the first n natural numbers)
#include<iostream>
using namespace std;

int Sum(int n)
{
    int sum=0;
    // Base case
    if(n==1)
    {
        return 1;
    }
    return n+Sum(n-1);
}

int main()
{
    cout<<"Sum of first n natural numbers (using Recursive function)"<<endl;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    
    cout<<"Sum of first "<<num<<" natural number is "<<Sum(num);
}
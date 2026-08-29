// Recursive function!! (To find the factorial of a number)
#include<iostream>
using namespace std;

int fact(int n)
{
    // Base case
    if(n==1 || n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}

int main()
{
    cout<<"Factorial of a number (using Recursive function)"<<endl;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num<0)
    {
        cout<<"Factorial of a negative number is not define."<<endl;
        return 0;
    }
    cout<<"Factorial of number "<<num<<" is "<<fact(num);
}
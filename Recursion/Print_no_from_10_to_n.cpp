// Recursive function!!! (Print numbers from 10 to n)
#include<iostream>
using namespace std;

void print(int n)
{
    // Base case
    if(n==10)
    {
        cout<<n<<endl;
        return;
    }
    print(n-1);
    cout<<n<<endl;
}

int main()
{
    cout<<"Print numbers from 10 to n (using Recursive function)"<<endl;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num<10)
    {
        cout<<"Number should be greater than 10!!!"<<endl;
        return 0;
    }
    print(num);
}
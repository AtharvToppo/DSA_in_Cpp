#include <iostream>
using namespace std;

bool prime(int n)
{
    if(n<2)
    return 0;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}

int fact(int n)
{
    int ans=1;
    for(int i=2;i<=n;i++)
    {
        ans=ans*i;
    }
    return ans;
}

int main()
{
    int a,b;
    cout<<"Enter a first number: ";
    cin>>a;

    cout<<"Enter a second number: ";
    cin>>b;

    cout << (prime(a) ? "first num is prime" : "not prime");
    // cout<<fact(a);
    // prime(b) ? " first num is prime " : " no prime";
    // cout<<fact(b);

    return 0;
}
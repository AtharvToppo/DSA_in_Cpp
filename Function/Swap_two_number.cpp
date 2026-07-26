#include <iostream>
using namespace std;
void  Swap(int &m,int &n)
{
    m=m+n;
    n=m-n;
    m=m-n;
}

int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    Swap(a,b);
    cout <<a << " " << b;
}
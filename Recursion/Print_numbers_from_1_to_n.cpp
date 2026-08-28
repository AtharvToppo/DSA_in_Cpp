// Recursive function (To print numbers from 1 to n)
#include<iostream>
using namespace std;
void print(int n)
{
    if(n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    print(n-1);
    cout<<n<<endl;
}
int main()
{
    cout<<"Printing number from 1 to n (using Recursive function)"<<endl;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    print(num);
}
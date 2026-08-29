// Recursive function (To print even numbers from 2 to n)
#include<iostream>
using namespace std;
void printeven(int n)
{
    if(n==2)
    {
        cout<<"2"<<endl;
        return;
    }
    printeven(n-2);
    cout<<n<<endl;
}
int main()
{
    cout<<"Printing even numbers from 2 to n (using Recursive function)"<<endl;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%2==1)
    {
        num--;
    }
    printeven(num);
    return 0;
}
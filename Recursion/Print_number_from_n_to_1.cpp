// Recursive function (To print numbers from n to 1)
#include<iostream>
using namespace std;
void print(int n)
{
    // Base case(to stop the function)
    if(n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl;
    print(n-1);
}
int main()
{
    cout<<"Printing number from n to 1(using Recursive function)"<<endl;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    print(num);
}
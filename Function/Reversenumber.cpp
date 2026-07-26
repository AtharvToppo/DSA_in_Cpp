#include <iostream>
using namespace std;
int reverse(int n)
{
    if(n<-5000 || n>5000)
    {
        return 0;
    }
    int ans=0;
        while(n)
        {
            int rem=n%10;
            n=n/10;
            ans=ans*10+rem;
        }
    return ans;
}
int main()
{
    int num;
    cout<<"Enter a number you wnat to reverse : ";
    cin>>num;
    cout<<reverse(num);
    return 0;
}
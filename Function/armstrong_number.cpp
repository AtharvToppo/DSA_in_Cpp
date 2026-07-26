#include <iostream>
#include <cmath>
using namespace std;

// Count function for counting the number of digit in a number
int Count(int n)
{
    int count=0;
    while(n!=0)
    {
        n/=10;
        count++;
    }
    return count;
}

// Armstrong number checking function
bool Armstrong(int num,int digit)
{
    int n,rem,ans=0;
    n=num;
    // Armstrong number = 153 --> digit count=3
    // 1^3 + 5^3 + 3^3 --> 1+125+27=153 ,So it is armstrong number
    while(n!=0)
    {
        rem=n%10;
        n/=10;
        ans=pow(rem,digit)+ans;
    }
    
    if(ans==num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int main()
{
    int num,digit;
    cout<<"Enter number to find its Armstrong number: ";
    cin>>num;
    digit=Count(num);
    Armstrong(num,digit);
    if(Armstrong(num,digit)==1)
    {
        cout<<"You entered "<<num<<" which is "<<"Armstrong number!";
    }
    else
    {
        cout<<"You entered "<<num<<" which is "<<"Not armstrong number!";
    }

    return 0;
}
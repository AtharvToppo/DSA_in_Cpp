// Exception handling in oops !!!
#include<iostream>
using namespace std;

class customer
{
    protected:
    string name;
    int account_no,balance;
    
    public:
    customer(string name,int account_no,int balance)
    {
        this->name=name;
        this->account_no=account_no;
        this->balance=balance;
    }
    
    void deposit(int amount)
    {
        if(amount<0)
        {
            throw runtime_error("Amount should be greater than 0 Rs.");
        }
        balance+=amount;
        cout<<amount<<" Rs is credited successfully."<<endl;
    }
    
    void withdraw(int amount)
    {
        if(amount>0&&amount<=balance)
        {
            balance-=amount;
            cout<<amount<<" Rs is debited successfully."<<endl;
        }
        else if(amount<0)
        {
            throw runtime_error("Amount should be greater than 0 Rs.");
        }
        else
        {
            throw runtime_error("Your balance is low");
        }
    }
};
int main()
{
    customer c1("Akku",67,3000);
    try
    {
        c1.deposit(100);
        c1.withdraw(4000);
    }
    catch(const runtime_error &e)
    {
        cout<<"Exception occured: "<<e.what()<<endl;
    }
    //default catch block
    catch(...)
    {
        cout<<"Exception occurred."<<endl;
    }
}
// Encapsulation !!!
#include<iostream>
using namespace std;

class customer
{
    string name;
    int account_number;
    int balance;
    
    public:
    //Parameterised Constructor
    customer(string name,int account_number,int balance)
    {
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
    }
    
    void deposit(int amount)
    {
        if(amount>0)
        {
            cout<<"Enter the amount to deposit: "<<amount<<endl;
            balance+=amount;
        }
        else
        {
            cout<<"Invalid amount."<<endl;
        }
    }
    
    void withdraw(int amount)
    {
        if(amount<=balance&&amount>0)
        {
            cout<<"Enter the amount to withdraw: "<<amount<<endl;
            balance-=amount;
        }
        else
        {
            cout<<"Invalid amount."<<endl;
        }
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Account number: "<<account_number<<endl;
        cout<<"Balance: "<<balance<<endl;
    }

};

int main()
{
    customer c1("Akku",1,1000);
    c1.display();
    
    cout<<endl;
    
    customer c2("Tom",2,1001);
    c2.display();
    
    cout<<endl;
    
    c2.withdraw(34);
    c2.display();

    
}
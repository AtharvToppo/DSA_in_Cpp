// Constructor in oops!!!
#include<iostream>
using namespace std;

class customer
{
    string name;
    int account_number;
    int balance;
    
    public:
    // Default Constructor
    customer()
    {
        name="Akku";
        account_number=1234;
        balance=100;
    }
    
    // Parameterized Constructor
    customer(string name,int account_number,int balance)
    {
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
    }
    
    // Copy Constructor
    customer(customer &a)
    {
        name=a.name;
        account_number=a.account_number;
        balance=a.balance;
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
    customer c1("Tinu",5678,67);
    c1.display();
    
    cout<<endl;
    
    customer c2;
    c2.display();
    
    cout<<endl;
    
    customer c3(c1);
    c3.display();
    
    cout<<endl;
    
}

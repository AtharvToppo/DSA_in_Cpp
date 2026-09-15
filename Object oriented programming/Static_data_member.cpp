// Static data member in OOPS (To find the total customer accounts in a bank)!!!
#include<iostream>
using namespace std;

class customer
{
    string name;
    int account_number;
    int balance;
    static int total_customer;
    
    public:
    //Parameterised Constructor
    customer(string name,int account_number,int balance)
    {
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
        total_customer++;
    }
    
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Account number: "<<account_number<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
    
    void display_total_customer()
    {
        cout<<"Total customer: "<<total_customer<<endl;
    }
};
int customer::total_customer=0;

int main()
{
    customer c1("Akku",1,1000);
    c1.display();
    
    cout<<endl;
    
    customer c2("Tom",2,1001);
    c2.display();
    
    cout<<endl;
    
    c2.display_total_customer();

    
}
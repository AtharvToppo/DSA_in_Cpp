// Single Inheritance in OOPS!!!
#include<iostream>
using namespace std;

class human
{
    protected:
    string name;
    int age;
    
    // Default constructor
    human()
    {
        cout<<"Hello human!"<<endl;
    }
};

class student: public human
{
    public:
    int roll_no,fees;
    
    // Default constructor
    student()
    {
        cout<<"Hello student!"<<endl;
    }
    
    //Parameterised constructor
    student(string name,int age,int roll_no,int fees)
    {
        this->name=name;
        this->age=age;
        this->roll_no=roll_no;
        this->fees=fees;
    }
    
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll number: "<<roll_no<<endl;
        cout<<"Fees: "<<fees<<endl;
    }
};

int main()
{
    student s1("Akku",21,17,150);
    s1.display();
}
// Hierarchical Inheritance in oops !!!
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
        
    }
};

class student:public human
{
    public:
    int roll_no,fees;
    
    // Default constructor
    student()
    {
        cout<<"Hello student!"<<endl;
    }
    
    // Parametrized constructor
    student(string name,int age,int roll_no,int fees)
    {
        this->name=name;
        this->age=age;
        this->roll_no=roll_no;
        this->fees=fees;
    }
    
    void stu_display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll number: "<<roll_no<<endl;
        cout<<"Fees: "<<fees<<endl;
    }
};

class teacher: public human
{
    protected:
    int salary;
    
    public:
    
    // Default constructor
    teacher()
    {
        cout<<"Hello teacher!"<<endl;
    }
    
    // Parametrized constructor
    teacher(string name,int age,int salary)
    {
        this->name=name;
        this->age=age;
        this->salary=salary;
    }
    
    void tec_display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main()
{
    student s1("Akku",21,17,150);
    teacher t1("Rohit",25,999);
    
    s1.stu_display();
    cout<<endl;
    t1.tec_display();
}
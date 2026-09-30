// Multilevel Inheritance in oops !!!
#include<iostream>
using namespace std;

class person
{
    protected:
    string name;
    int age;
    
    public:
    void introduce()
    {
        cout<<"Hello my name is "<<name<<endl;
        cout<<"My age is "<<age<<endl;
    }
    
};

class employee: public person
{
    protected:
    int salary;
    
    public:
    void monthly_salary()
    {
        cout<<"My monthly salary is "<<salary<<endl;
    }
};

class manager: public employee
{
    protected:
    string department;
    
    public:
    manager(string name,int age,int salary,string department)
    {
        this->name=name;
        this->age=age;
        this->salary=salary;
        this->department=department;
    }
    
    void work()
    {
        cout<<"I am work in "<<department<<" department."<<endl;
    }
    
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Department: "<<department<<endl;
    }
};

int main()
{
    manager m1("Akku",21,999, "Technical");
    
    m1.introduce();
    m1.monthly_salary();
    m1.work();
    
    cout<<endl;
    
    m1.display();
}
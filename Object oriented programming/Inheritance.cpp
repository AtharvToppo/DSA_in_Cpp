// Inheritance in oops !!!
#include<iostream>
using namespace std;

class human
{
    public:
    string name;
    int age, weight;
};

class student: public human
{
    public:
    int roll_no,fees;
    
    void fun(string n,int a,int w,int r,int f)
    {
        name=n;
        age=a;
        weight=w;
        roll_no=r;
        fees=f;
    }
    
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Weight: "<<weight<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"Fees: "<<fees<<endl;
    }
};

int main()
{
    student s1;
    s1.fun("Akku",21,67,17,150);
    s1.display();
}
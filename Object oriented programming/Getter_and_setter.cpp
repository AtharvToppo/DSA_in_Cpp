// Getter and Setter in oops!!!
#include<iostream>
using namespace std;

class student
{
    string name;
    int age,roll_no;
    string grade;
    
    // Function Getter and Setter
    
    // Setter Function
    public:
    void set_name(string s)
    {
        if(s.size()==0)
        {
            cout<<"Invalid name"<<endl;
            return;
        }
        name=s;
    }
    void set_age(int a)
    {
        if(a<0||a>100)
        {
            cout<<"Invalid age"<<endl;
            return;
        }
        age=a;
    }
    void set_roll(int r)
    {
        roll_no=r;
    }
    void set_grade(string g)
    {
        grade=g;
    }
    
    // Getter Function
    string get_name()
    {
        return name;
    }
    
    int get_age()
    {
        return age;
    }
    
    int get_roll()
    {
        return roll_no;
    }
    
    string get_grade(int pin)
    {
        if(pin==123)
        {
            return grade;
        }
        
        return "Invalid pin";
    }
};

int main()
{
    cout<<"Getter and Setter function in OOPS !!!"<<endl;
    student s1; // object
    s1.set_name("Akku");
    s1.set_age(21);
    s1.set_roll(17);
    s1.set_grade("A");
    
    
    cout<<"Name: "<<s1.get_name()<<endl;
    cout<<"Age: "<<s1.get_age()<<endl;
    cout<<"Roll_No.: "<<s1.get_roll()<<endl;
    cout<<"Grade: "<<s1.get_grade(123)<<endl;
    
    
}
// Creating class and object !!!
#include<iostream>
using namespace std;

class student
{
    public: // Access modifier
    string name;
    int age,roll_no;
    string grade;
};

int main()
{
    cout<<"Creating class and object !!!"<<endl;
    student s1; // object
    s1.name="Akku";
    s1.age=21;
    s1.roll_no=17;
    s1.grade="A";
    
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;
    cout<<"Roll No.: "<<s1.roll_no<<endl;
    cout<<"Grade: "<<s1.grade<<endl;
}
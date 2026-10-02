// Hybrid Inheritance in oops !!!
#include<iostream>
using namespace std;

class student
{
    public:
    void print()
    {
        cout<<"I am student."<<endl;
    }
};


class male
{
    public:
    void maleprint()
    {
        cout<<"I am male."<<endl;
    }
};

class female
{
    public:
    void femaleprint()
    {
        cout<<"I am female."<<endl;
    }
};

class boy:public student, public male
{
    public:
    void boyprint()
    {
        cout<<"I am a boy."<<endl;
    }
};

class girl: public student,public female
{
    public:
    void girlprint()
    {
        cout<<"I am a girl."<<endl;
    }
};

int main()
{
    boy b1;
    b1.print();
    b1.maleprint();
    b1.boyprint();
    
    cout<<endl;
    
    girl g1;
    g1.print();
    g1.girlprint();
    g1.femaleprint();
}
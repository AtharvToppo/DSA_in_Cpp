// Multiple Inheritance in oops !!!
#include<iostream>
using namespace std;

class student
{
    protected:
    string subject;
    
    public:
    void fav_subj()
    {
        cout<<"My fav subject is "<<subject<<endl;
    }
};

class sport
{
    protected:
    string game;
    
    public:
    void play()
    {
        cout<<"I play "<<game<<endl;
    }
};

class human: public student, public sport
{
    protected:
    string name;
    
    public:
    
    human(string name,string subject,string game)
    {
        this->name=name;
        this->subject=subject;
        this->game=game;
    }
    
    void display()
    {
        cout<<"My Name is "<<name<<endl;
        fav_subj();
        play();
    }
};

int main()
{
    human h1("Akku","Maths","Cricket");
    
    h1.display();
    
}
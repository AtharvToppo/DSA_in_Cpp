// Multi-path Inheritance in oops !!!
#include<iostream>
using namespace std;

class human
{
    public:
    string name;
    int age;
    
    void humandisplay()
    {
        cout<<"My name is "<<name<<endl;
    }
    
};

class student: public virtual human
{
    protected:
    string subject;
    
    public:
    void fav_subj()
    {
        cout<<"My fav subject is "<<subject<<endl;
    }
};

class sport: public virtual human
{
    protected:
    string game;
    
    public:
    void play()
    {
        cout<<"I play "<<game<<endl;
    }
};

class hobey: public student, public sport
{
    protected:
    string hobey_name;
    
    public:
    
    hobey(string name,string hobey_name,string subject,string game)
    {
        this->name=name;
        this->hobey_name=hobey_name;
        this->subject=subject;
        this->game=game;
    }
    
    void display()
    {
        humandisplay();
        fav_subj();
        play();
        cout<<"My Hobey is "<<hobey_name<<endl;
    }
};

int main()
{
    hobey h1("Akku","Dancing","Maths","Cricket");
    h1.display();
}
// Polymorphism (virtual function) in oops !!!
#include<iostream>
#include<vector>
using namespace std;

class animal
{
    public:
    /*
    The virtual keyword tells the compiler which speak () function to use at runtime.
    If we don't write virtual, the compiler decides at compile time.
    */
    
    virtual void speak()
    {
        cout<<"huhu"<<endl;
    }
    
    /*
    Pure virtual function
    
    virtual void speak()=0; Abstract class
    
    If you do not want to create an object of a class, use a pure virtual function,
    because by making this function the object of the class is not created.
    */
};

class dog: public animal
{
    public:
    void speak()
    {
        cout<<"Bark"<<endl;
    }
};

class cat: public animal
{
    public:
    void speak()
    {
        cout<<"Meow"<<endl;
    }
};

int main()
{
    // animal *p;
    // p = new dog();
    // p->speak();
    
    animal *p;
    vector<animal*>animals;
    animals.push_back(new dog());
    animals.push_back(new cat());
    animals.push_back(new animal());
    animals.push_back(new dog());
    animals.push_back(new cat());
    
    // Print the sound of animals
    for(int i=0;i<animals.size();i++)
    {
        p=animals[i];
        p->speak();
    }
}
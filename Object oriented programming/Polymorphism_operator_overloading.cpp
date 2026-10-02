// Polymorphism (operator overloading) in oops !!!
#include<iostream>
using namespace std;

class complex
{
    int real,img;
    
    public:
    complex()
    {
        
    }
    
    complex(int real,int img)
    {
        this->real=real;
        this->img=img;
    }
    
    // create a function for adding two complex numbers
    complex operator +(complex &c)
    {
        complex ans;
        ans.real=real+c.real;
        ans.img=img+c.img;
        return ans;
    }
    
    void display()
    {
        cout<<"Complex number: "<<real<<"+i"<<img<<endl;
    }
};
int main()
{
    complex c1(4,3);
    complex c2(2,4);
    
    complex c3=c1+c2;
    /*
    It is not added until we create an addition function,
    because it is user define function.
    */
    c3.display();
}
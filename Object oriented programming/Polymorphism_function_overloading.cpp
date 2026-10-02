// Polymorphism (function overloading) in oops !!!
#include<iostream>
using namespace std;

class area
{
    public:
    // Area of circle
    float calculatearea(int r)
    {
        return 3.14*r*r;
    }
    // Area os rectangle
    int calculatearea(int l,int b)
    {
        return l*b;
    }
    
    /*
    Both functions have the same name but have different parameters.
    So, this is called function overloading.
    */
    
};

int main()
{
    area a1,a2;
    cout<<a1.calculatearea(7)<<endl;
    cout<<a2.calculatearea(6,7)<<endl;
}
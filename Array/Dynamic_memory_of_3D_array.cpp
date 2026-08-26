// Dynamic memeory allocation of 3D Array!!!
#include<iostream>
#include<string>
using namespace std;

int main()
{
    
    int l,b,h; // l=lenght,b=breath,h=hieght
    cout<<"Enter the lenght,breath and hieght of the array: ";
    cin>>l>>b>>h;
    // Triple pointer which store address of 2D array
    int ***ptr=new int **[l];
    
    // creating 2D array
    for(int i=0;i<l;i++)
    {
        ptr[i]=new int *[b];
        for(int j=0;j<b;j++)
        {
            ptr[i][j]=new int[h];
        }
    }
    cout<<"Enter the elements of the array:\n";
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<b;j++)
        {
            for(int k=0;k<h;k++)
            {
                cin>>ptr[i][j][k];
            }
        }
    }
    cout<<"Elements of the array:\n";
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<b;j++)
        {
            for(int k=0;k<h;k++)
            {
                cout<<ptr[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    
    // Release the memeory from Heap
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<b;j++)
        {
            delete[] ptr[i][j];
        }
        delete[] ptr[i];
    }
    delete[] ptr;
}
/*1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number*/
#include<iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;
public:
    void set(int r, int i)
    {
        real = r;
        img = i;

    }
    void get(Complex c ,Complex c1)
    {
        cout<<real<<" + "<<img<<"i"<<endl;
        cout<<c.real<<" + "<<c.img<<"i"<<endl;
        cout<<c1.real<<" + "<<c1.img<<"i"<<endl;
    }
    void add(Complex c2 ,Complex c3)
    {
        cout<<c2.real+c3.real+real<<" + "<<c2.img+c3.img+img<<"i"<<endl;
    }

};
int main()
{
 Complex b1,b2,b3;
 b1.set(4,5);
 b2.set(5,6);
 b3.set(3,6);
 b2.get(b1,b3);
 b2.add(b1,b2);
 return 0;

}


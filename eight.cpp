/*8. Define a class Rectangle and define an instance member function to find the area of
the rectangle.*/
#include<iostream>
using namespace std;
class Rectangle
{
public :
    int area(int a,int b)
    {
        cout<<"Area of "<<a<<"*"<<b<<"=";
        return a*b;
    }
};
using namespace std;
int main()
{
    Rectangle r1,r2,r3;
    cout<<r1.area(3,4)<<endl;
    cout<<r2.area(8,9)<<endl;
    cout<<r3.area(8,7)<<endl;

    return 0;
}

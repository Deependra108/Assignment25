/*10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc.*/
#include<iostream>
using namespace std;
class Area
{
public:
    int square(int a)
    {
        cout<<"Area of square is = ";
        return a*a;
    }
    int rectangle(int a,int b)
    {
        cout<<"Area of rectangle = ";
        return a*b;
    }
    float circle(float r)
    {
        cout<<"Area of Circle = ";
        return (3.14*r*r);
    }
};
int main()
{
    Area a1,a2;
   cout<<a1.square(5)<<endl;
    cout<<a1.circle(4)<<endl;
    cout<<a2.rectangle(4,6)<<endl;
    cout<<a2.square(8)<<endl;
    return 0;
}

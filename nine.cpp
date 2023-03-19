#include<iostream>
using namespace std;
class Circle
{
public :
    float area(float r)
    {
        cout<<"Area of circle 3.14*"<<r<<"*"<<r<<"=";
        return (3.14*r*r);
    }
};
int main()
{
    Circle c1,c2;
    cout<<c1.area(5.2)<<endl;
    cout<<c2.area(6)<<endl;
    return 0;
}

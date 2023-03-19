/*2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.*/
#include<iostream>
using namespace std;
class Time
{
private:
    int hour, minite, second;
public:
    void set(int h ,int m,int s)
    {
        hour = h;
        minite = m;
        second = s;
    }
    void print()
    {
        cout<<hour<<" hr "<<minite<<" min "<<second<<" sec "<<endl;
    }
};
int main()
{
    Time b1;
    b1.set(3,45,20);
    b1.print();
}

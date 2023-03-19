/*3. Define a class Factorial and define an instance member function to find the Factorial
of a number using class.*/
#include<iostream>
using namespace std;
class Factorial
{
public :
    void fact(int n)
    {
       int  fac = 1;
        while(n!=0)
        {
            fac = fac*n;
            n--;
        }
        cout<<"factorial of is "<<fac<<endl;
    }
};
int main()
{
    int n;
    cin>>n;
    Factorial b1;
    b1.fact(n);
    return 0;
}

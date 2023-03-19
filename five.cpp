/*5. Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.*/
#include<iostream>
using namespace std;
class ReverseNumber
{
    public:
    void reverse(int n)
    {
        int x;
        while(n!=0)
        {

             x = n%10;
            n = n/10;
        }
        cout<<x;
    }
};
int main()
{
    ReverseNumber b1;
    b1.reverse(568);
    return 0;
}


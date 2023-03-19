/*6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.*/
#include<iostream>
using namespace std;
class Square
{
    public :
    void sqr(int n)
    {
      int s;
      s= n*n;
      cout<<"Square of "<<n<<" is "<<s<<endl;
    }
};
int main()
{
    Square  ob1;

    ob1.sqr(5);
    ob1.sqr(7);
    ob1.sqr(19);
    return 0;
}


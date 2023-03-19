/*7. Define a class Greatest and define instance member function to find Largest among
3 numbers using classes.*/
#include<iostream>
using namespace std;
class Largest
{
private :
    int a,b,c;
public:
    void set(int x,int y, int z)
    {
        a=x;
        b=y;
        c=z;
    }
    int large()
    {
        if(a>b)
        {
          return a;
        }
        else
        {
            if(b>c)
                return b;
            else
                return c;
        }
    }


};
int main()
{
    Largest l1,l2;
    l1.set(6,11,10);
     cout<<l1.large()<<"is Greater"<<endl;
    l2.set(5,6,9);

    cout<<l2.large()<<"is Greater"<<endl;
     return 0;
}

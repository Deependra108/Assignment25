/*4. Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.*/
#include<iostream>
 using namespace std;
 class LargestNumber
 {
 private:
    int a,b,c;
 public:
    void greater(int x, int y, int z)
    {
        if(x>y)
            cout<<x<<" is Greater"<<endl;
        else
        {
            if(y>z)
                cout<<y<<" is greater"<<endl;
            else
                cout<<z<<" is greater"<<endl;
        }
    }
 };
 int main()
 {
     LargestNumber b1,b2;
     b1.greater(4,5,2);
     b1.greater(56,87,9);
     return 0;
 }

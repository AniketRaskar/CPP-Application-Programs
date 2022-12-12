#include<iostream>
using namespace std;

class Base
{
   public:
   int x;
   int y;
   Base()
   {
       cout<<"Inside Base constructor"<<endl;
   }
   ~Base()
   {
       cout<<"Inside Base Destructor"<<endl;
   }
};
class Derived : public Base
{
    public:
    Derived()
    {
        cout<<"Inside Derived constructor"<<endl;
    }
    ~Derived()
    {
        cout<<"Inside Derived destructor"<<endl;
    }
};

int main()
{
    Derived obj;   //when we create object of derived class initialy constructor of base class gets called, & then constructor of derived class gets called,
    //the destructors gets called in the reverse order of the constructor
    return 0;
}
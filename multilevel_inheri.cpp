#include<iostream>
using namespace std;
class Base
{
   public:
   int x,y;     

  Base()
   {
       cout<<"Inside the base constructor"<<endl;
   }

   ~Base()
   {
    cout<<"Inside the base destructor"<<endl;
   }
};

class Derived : public Base
{
   public:
   int i,j;

   Derived()
   {
       cout<<"Inside the derived constructor"<<endl;
   }
   ~Derived()
   {
       cout<<"Inside the derived destructor"<<endl;
   }
};
class Derived1 : public Derived
{
   public:
   int k,l;

   Derived1()
   {
       cout<<"Inside the derived1 constructor"<<endl;
   }
   ~Derived1()
   {
       cout<<"Inside the derived1 destructor"<<endl;
   }
};
int main()
{
    Derived1 obj;   //when we create object of derived1 class,the constructor gets called in squence Base, Derived1, Derived2
    //Destrctors gets called in the reverse order
    return 0;
}
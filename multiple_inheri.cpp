#include<iostream>
using namespace std;

//if one class is inherited from more than one classes, then it is considred as multiple inheritance

class Base1
{
   public:
   int x,y;     

  Base1()
   {
       cout<<"Inside the base1 constructor"<<endl;
   }

   ~Base1()
   {
    cout<<"Inside the base1 destructor"<<endl;
   }
   void fun()
    {
        cout<<"Inside base1 fun"<<"\n";
    }
};

class Base2
{
   public:
   int i,j;

   Base2()
   {
       cout<<"Inside the Base2 constructor"<<endl;
   }
   ~Base2()
   {
       cout<<"Inside the Base2 destructor"<<endl;
   }
   void fun()
    {
        cout<<"Inside base2 fun"<<"\n";
    }
};
class Derived : public Base1,Base2    //constructors are called in the squence in which classes are inherited
{
   public:
   int k,l;

   Derived()
   {
       cout<<"Inside the derived constructor"<<endl;
   }
   ~Derived()
   {
       cout<<"Inside the derived destructor"<<endl;
   }
};
int main()
{
    Derived obj;   //here as Derived is derived class from Base1 & Base2, constructors of Base1 & Base2 will gets called res and then of Derived
    //similarly destructors will gets called in the reverse order. 

//if both the inherited class contains same named mathod then to due to ambiguity, we can't access it, so in this case we have to access the method by using class name
    obj.Base1::fun();
    return 0;
}
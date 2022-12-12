#include<iostream>
using namespace std;
//As it is the single level inheritance only derived class is derived from base class.
//here Base is the first function Derived in the derived function from base function & main is the nacked function.
class Base
{
   public:
   int x;      //this are the 2 charcteritics so memory 8 bytes of memory will be allocated for that as in class memory is allocated for only characteritics.
   int y;

   Base()
   {
       cout<<"Inside the base constructor"<<endl;
   }

   ~Base()
   {
    cout<<"Inside the base destructor"<<endl;
   }
   void fun()
   {
       cout<<"Inside the base fun "<<endl;
   }
};

class Derived : public Base
{
   public:
   int i;
   int j;

   Derived()
   {
       cout<<"Inside the derived constructor"<<endl;
   }
   ~Derived()
   {
       cout<<"Inside the derived destructor"<<endl;
   }
   void gun()
   {
       cout<<"Inside the Derived gun"<<endl;
   }
};

int main()
{
    cout<<sizeof(Base)<<endl;    //it would be 8 bytes as Base() having 2 characterics
   // Base Bobj;          //it is not neccesary to create the object of Base class as it is inherited in derived class, it's method can be use by derived class object. 
    cout<<sizeof(Derived)<<endl;     //it would be 16 bytes as Derived having 2 characterics + 2 of the base class which is the inherited.
    Derived Dobj;   //object of derived class, aslo it work for Base class
    Dobj.gun();
    Dobj.fun();   //gun() is called as all funtions gets inherited in derived class as we have use the inheritance.
    return 0;
}
/*
as in constructor when object is created, first constructor is gets called,after this dectructor gets called, in same manner in single level inheritance fistly constructor of base class gets called then constructor of the derived class gets called & then fianlly when all functions get called the destructors get called from last to first i.e. first dest. of derived and then dest. of base class gets called

"this is same like when baby borns all relative gives him ring( ring is given ie.constructor gets allocated), when he dies all his gold is taken away(gold is taken away ie.destructors gets called ie. memory becomes free) "
*/

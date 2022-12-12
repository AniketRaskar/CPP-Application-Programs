#include <iostream>
using namespace std;
//If a class contains single virtual function or if a class is derived from such a class which contains at least single virtual function, then first 8 bytes(depends on compiler may be 4 bytes,in this pc also 4 bytes) of that class object are reserved as VPTR, VPTR is considerd as virtual pointer, which points to a table called as virtual table, which contains the address of virtual function of the class
class Base
{
    public:
    int x;
    int y;
    
    virtual void fun()
    {
        cout<<"Inside Base fun"<<"\n";
    }
    void gun()
    {
        cout<<"Inside Base gun"<<"\n";
    }
};
class Derived : public Base
{
    public:
    int i;
    int j;
    void sun()
    {
        cout<<"Inside derived sun"<<"\n";
    }
};

int main()
{
    //when we use the concept of upcasting, compiler will cheak the func of class whose pointer is created, so can't access the members of a Derived class.
    Base *bp = new Derived();  //Upcasing-pointer of Base class pointing to derived class
    bp ->fun();
    bp ->gun();
   // bp ->sun();  //not allowed due to upcasting

   cout<<"size of Base class is:"<<sizeof(Base)<<"\n";  //12  , bcz 8 bytes for characteritcs and 4 bytes of VPTR due to containing virtual function.
   cout<<"size of Derived class is:"<<sizeof(Derived)<<"\n";  //20
   return 0;
}
//ESI : Extended Source Index which holds the address of caller object
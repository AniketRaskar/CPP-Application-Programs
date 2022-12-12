#include <iostream>
using namespace std;

class Base
{
    public:
    int x;
    int y;
    virtual void fun()
    {
        cout<<"Inside Base fun"<<"\n";
    }
    virtual  void gun()
    {
        cout<<"Inside Base gun"<<"\n";
    }
    void run()
    {
        cout<<"Inside  Base run "<<"\n";
    }
    virtual void mun()
    {
        cout<<"Inside Base mun"<<"\n";
    }
};
class Derived : public Base
{
    public:
    int i;
    int j;
    virtual void fun()
    {
        cout<<"Inside Derived fun"<<"\n";
    }
    void gun()
    {
        cout<<"Inside derived gun"<<"\n";
    }
    void run()
    {
        cout<<"Inside derived run"<<"\n";
    }
    void pun()
    {
        cout<<"Inside Derived pun"<<"\n";
    }
    
};

int main()
{
    //if function in base is non-virtual then compiler call that function immediatly, if there is no such function then compiler gives the error. if function is there in that class, but it is virtual then compiler cheak the existance of that function in the derived class, if function is not there in the derived class then base class function gets called and if it is there in the derived class, then function of derived class gets called.
    
    Base *bp = new Derived();  //Upcasing-pointer of Base class pointing to derived class
    bp ->fun();  //inside derived fun
    bp ->gun();  //inside derived gun
    bp ->mun();  //inside base mun
    bp ->run();  //inside base run
   // bp ->sun();  //not allowed due to upcasting

   cout<<"size of Base class is:"<<sizeof(Base)<<"\n";  //12
   cout<<"size of Derived class is:"<<sizeof(Derived)<<"\n";  //20 

   /*If we try to access the methods by creating the object of derived class then all the derived class methods gets called & we cannot do the concept of virtual by that (Akhya concept chi aaai mayii hote.)
   Derived *dp = new Derived();
   dp->fun();
   dp->gun();
   dp->run();   */
   return 0;
}
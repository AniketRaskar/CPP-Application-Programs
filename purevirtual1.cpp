#include<iostream>
using namespace std;

class Base
{
    public:
    int x,y;
    void fun()
    {
        cout<<"Base fun"<<"\n";
    }
    virtual void gun()
    {
        cout<<"Inside Base gun"<<"\n";
    }
    virtual void sun()
    {
        cout<<"Inside Base sun"<<"\\n";
    }
    virtual void run() =0;  //pure virtual function
};
class Derived : public Base
{
    public:
    int i,j;
    void fun()  //defination
    {
        cout<<"Inside Derived fun"<<"\n";
    }
    virtual void gun()  //Overriden defination
    {
        cout<<"Derived gun"<<"\n";
    }
    // concrete defination of virtual function
    void run()
    {
        cout<<"Derived run"<<"\n";
    }
};
int main()
{
    //we cannot create object of abstract class, bcz due to pure virtual function the VTABLE is an incomplete, VTABLE is an Indirect part of class object, due to which object of that class is incomplete, due to this drawbacks we cannot create object of a class which contains pure virtual function in it.
   // Base bobj;   //Not allowed
    Derived dobj;   //object of derived class is created
    Base *bp = NULL;
    bp =  &dobj;
    //Base *bp = new Derived();   //also allowed

    bp -> fun();
    bp ->sun();
    bp ->gun();
    bp ->run();
    return 0;
}
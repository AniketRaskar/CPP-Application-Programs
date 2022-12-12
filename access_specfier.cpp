#include<iostream>
using namespace std;
//access specifiers are use to decide who can access the members of class & who can not, it is applicable for both characteritics as well as behaviours of class.
//public & private
//in c++ any fun or variable by default it is private.
// Irespective of the access specifier, memory for the functions gets allocated but member initialisation depends on the access specifier.
class Demo
{
        int i;    //as i having no access specifier by defeault it is private.  
    public:
        int x;
    private:   //y is made is private externally here.
        int y;
    public:
        Demo()        //here Demo function is public, it is constructor so it must be public so that it can be called by the compiler
        {
            x=10;
            y=20;
            i=30;
        }

        void fun()    //as declared above fun() is also public
        {
            cout<<"Inside the public fun"<<endl;
            cout<<y<<endl;
            gun();    //as gun is private down, it is made public here by taking it into public function,now it can be use in main function,as it is public now
        }

    private:
        void gun()     //here method gun() is private
        {
            cout<<"Inside the private gun"<<endl;
            cout<<y;   //allowed
        }

};
int main()
{
    Demo obj;

    cout<<obj.x<<endl;
    //cout<<obj.y<<endl;
    //cout<<obj.i<<endl;   //as y & i are private those are inaccessible.

    obj.fun();
    //obj.gun();     //as gun() is inaccesible it cannot be initialised.
    return 0;
}
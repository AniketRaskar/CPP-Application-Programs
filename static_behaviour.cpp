#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;            // instance variable    (Non static)
        static int x;    // Class variable      (Static)

        Demo(int a = 10, int b = 20)    //parametrised constructor with default arguments
        {
                cout<<"Inside constructor\n";

                this->i = a;
                this->j = b;
        }
        // void fun(Demo *this, int no)
        void fun(int no)    //non - static method can access both static as well as not static characteritics of a class
        {
            cout<<"Inside non static fun\n";
            cout<<this->i<<"\n";
            cout<<this->j<<"\n";
            cout<<Demo::x<<"\n";
        }

        // static void gun(int value)  //static method can call only static characteritics of a class
        static void gun(int value)   //as it being static method it will not get called with this pointer
        {
            cout<<"Inside static gun\n";
            cout<<x<<"\n"; //this can be as x being static char
  //          cout<<this->i<<"\n";// it will give error as we can't access non-static variable in static method
        }
};

int Demo::x = 30;   //here we initialise the memory for x without creating the object as being static.

int main()
{
    cout<<Demo::x<<"\n";
    Demo::gun(11);   //gun() method will gets callled.

    Demo obj(11);   //Demo constructor will gets called.

    obj.fun(21);        // fun(&obj,21); this 21 is only for method calling this will not gets replace with 'i' value
    cout<<sizeof(obj)<<"\n";

    cout<<obj.i<<"\n";   //as we have pass value 11 in through object it will gets stored for a
    cout<<obj.j<<"\n";   // for j default value 20 will be gets outputed.

    obj.gun(11);        // Demo::gun(11)  //as being static it can be called with the help of object,but it is bad programer's practise.

    return 0;
}

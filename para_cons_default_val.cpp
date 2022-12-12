#include<iostream>
using namespace std;

class Demo
{
    public:
       int x;    //x & y are the characteritics of the Demo class
       int y;

       Demo(int a=10,int b=20)  //here Demo is the constructor which accepts two parameters & both parameters having default values
       {
           x=a;
           y=b;
       }
};

int main()
{
    Demo obj1;  // (a=10,b=20) as here we have not passed any value through obj, both default values will be taken by the constructor

    Demo obj2(11);   //  (a=11,b=20) as here we have passed single value through obj(11),it will be taken by the constructor for a, and for b default value will be taken ie.20

    Demo obj3(11,21);  // (a=11,b=21) as here we have passed both the values for the obj(11,21), it will be taken by the constructor for a & b res.,no defaut values will be taken.

    return 0;
}



//composition :creation of object of one class in another

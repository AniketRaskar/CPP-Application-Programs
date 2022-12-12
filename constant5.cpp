#include<iostream>
using namespace std;
// normal object can call constant as well as normal method, but constant object can only constant methods.bcz if contant object calls non constant method then values inside normal method can be change, mg constant object karun phayada kay...
class Demo
{
    public:
    int i;
    const int j;  //constant characteritic

    Demo(int a,int b):j(b)   //initalising j with initialisation list
    {
        cout<<"Inside Demo cons"<<"\n";
        i=10;
    }

    void fun()
    {
        cout<<"Inside fun"<<"\n";
        i++;   //allowed
       // j++;   //not allowed as being constant
    }

    //b is constant input argument
    void gun(int a,const int b) const
    {
        cout<<"Inside const gun \n";
        int x=12;
        const int y =15;

        //i++;  // as method being const can't increment
        //j++;  //not allowed as method being constant

        x++;  //allowed as being local char
       // y++;  //not allowed as being local but cons

        a++;  //allowed
        //b++;  //not allowed as parameter being constant 
    }

};
int main()
{
    Demo obj1(11,21);
    obj1.fun();
    obj1.gun(31,41); 

    const Demo obj2(12,13);
   // obj2.fun();  //can't access this method as object being constant and menthod being normal
    obj2.gun(15,16); //allowed as method being constant and obj also cons
    return 0;
}
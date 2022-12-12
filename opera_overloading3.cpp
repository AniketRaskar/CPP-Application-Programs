#include<iostream>
using namespace std;
//In this we use the relational operator it can be determine directly like primitive data types so this gives error so it is overcome in next oper_loading4.cpp file

class Demo
{
    public:
    int x;
    int y;
    Demo(int i=10,int j=20)
    {
        x=i;
        y=j;
    }
};

int main()
{
    Demo obj1(11,21);
    Demo obj2(51,101);
    Demo robj(0,0);
    if(obj1 == obj2)
    {
        cout<<"objects are same"<<"\n";
    }
    else
    {
        cout<<"Objects are different"<<"\n";
    }
    return 0;
}
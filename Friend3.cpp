#include<iostream>
using namespace std;

//creating whole class as a friend of our class
//if class contains multiple functionality then it is better to make whole class a friend instead of making single-single friend.

//if third class inherits such a class which is friend of our class then private & protected part is not accesible to that class as only middle class is friend
// it's like wadilanche friend he apale friend nastat jar apale pn banwayche astil tar explicitly banwawe lagatat

class Hello
{
    public:
    void fun();
    void gun();
};
class Demo
{
    public:
    int x;
    private:
    int y;
    protected:
    int z;
    public:
    Demo()
    {
        int x=10;
        int y=20;
        int z=30;
    }
    //friend void Hello::fun();
    //friend void Hello::gun();
    friend class Hello;
};

void Hello :: fun()
{
    Demo dobj;
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";
    cout<<dobj.z<<"\n";
}
void Hello :: gun()
{
    Demo dobj;
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";
    cout<<dobj.z<<"\n";
}
int main()
{
    Hello hobj;
    hobj.fun();
    hobj.gun();
    return 0;
}
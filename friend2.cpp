#include<iostream>
using namespace std;

//creating member function of class friend to access the non accessible functions
class Hello
{
    public:
    void fun();
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
    friend void Hello :: fun();
};

void Hello :: fun()
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
    return 0;
}
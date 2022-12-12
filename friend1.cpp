#include<iostream>
using namespace std;
//By using the concept of friend we can access the charactericts or functions of class which are non-accesible 
//In the concept of Friend we access the in-accesible functions by creating the object of that class inside the other class in which we have to access the function
//such a concept of creation of object of one class in another class is called Composition.
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
    friend void fun();
};

void fun()
{
    Demo obj;
    cout<<obj.x<<"\n";
    cout<<obj.y<<"\n";
    cout<<obj.z<<"\n";
}
int main()
{
    fun();
    return 0;
}
//In this program characteritics y and z are private and protected that are inaccesible outside the class but by using the concept of frined we can access that
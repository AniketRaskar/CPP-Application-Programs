//allocating memory for class dynamicaly
#include<iostream>
using namespace std;

class Demo
{
    public :
    int x;
    int y;
    Demo()
    {
        cout<<"Inside default constructor\n";
    }
    ~Demo()
    {
        cout<<"Inside destructor\n";
    }
    void Fun()
    {
        cout<<"Inside fun \n";
    }
};
int main()
{
    //when object is static use direct accesing operator ie. hatat peda
    //when object is dyanamic use indirect accesing operator ie. titala peda/wastu ghe hatane dakhawane.
    Demo obj;  //static object creation
    obj.Fun(); //direct hatat wastu dene
    //Demo *dobj = new Demo;  //also allowed
    Demo *ptr = NULL;
    ptr = new Demo;
    ptr->Fun();  //hatene dakhwane
    return 0;
}
#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;
    const int j;
    Demo():j(20)
    {
        i=10;
       // j=20;  //cannot midify the value of constant variable inside the constructor we have to initialise it at the time of constant declaraation.
    }
    //creating paramerised constructor, and as j becoming constant intialising it with costructor initialisation list
    Demo(int a, int b):j(b)
    {
        cout<<"Inside the parameterised cons"<<"\n";
        i=a;
    }
};
int main()
{
    Demo obj;
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";

    Demo obj1(11,21);
    cout<<obj1.i<<endl;
    cout<<obj1.j<<endl;

    return 0;
}
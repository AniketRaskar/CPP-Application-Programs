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
       // j=20;  //cannot midify the value of constant variable inside the constructor we have to initialise it at the time of cons declaraation.
    }
    //creating paramerised constructor, and as j becoming const intialising it with member initialisation
    Demo(int a, int b):i(a),j(b)  //i(a) is optional
    {
        cout<<"Inside the parameterised cons"<<"\n";
        i=a;
    }
};
int main()
{
   /* Demo obj;
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n"; */

    Demo obj1(11,21);
    cout<<obj1.i<<endl;
    cout<<obj1.j<<endl;

    obj1.i++;
    //obj1.j++;  //can' be incremented as being constant.
    cout<<obj1.i<<"\n";

    return 0;
}
#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;
    const int j; //here initialization is excepted.
    //if we have not intialise the constant char. immagiatly then we have to initialise it in the prototype of contructor ie. by constructor initialisation list
    Demo():j(20)
    {
        cout<<"Inside demo cons"<<"\n";
        i=10;
        //j=20;   //can't initalise the constant characteritics inside the constructor
        
    }
};
int main()
{
    Demo obj;
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";
    return 0;
}
//If we have intialized the constant value at the time of it's declaration or not then it possible to reinitilized the constant value after the constructor's prototype by geiving : eg(demo():j(21))
//by this way constant value can be change
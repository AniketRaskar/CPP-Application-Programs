#include<iostream>
using namespace std;
// Pure virtual function is such a function which is declared by the class without body.and the class which contains at least single pure virtual function,is called abtract class. when any class inherit such abstract class then it is compulsary for the derived class to provide defination of such pure virtual function, that class in which defiantion is provided that function is called 'Concrete funcion',and class is called Concrete class.

//same concept is replaced in java with interface
class Base
{
    public:
    int x;
    int y;

    int add(int a,int b)
    {
        return a+b;
    }
     virtual int sub(int a,int b) =0;  //pure virtual function
};
class derived : public Base
{
    public:
    int i;
    int j;
    int sub(int a,int b)  //Concrete function
    {
        return a-b;
    }
    int mult(int a, int b)
    {
        return a+b;
    }
};
int main()
{
    Base *bp = new derived();
   int ret=0;
   ret = bp ->add(10,20);
   cout<<"Addition is:"<<ret<<"\n";

   ret= bp -> sub(20,10);
   cout<<"subtraction is:"<<ret<<"\n";

   //ret = bp -> mult(10,12);   //not allowed as being not a function of Base.
   //cout<<"Multiplication is:"<<ret<<"\n";

    return 0;
}
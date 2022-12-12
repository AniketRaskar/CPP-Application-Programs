#include<iostream>
using namespace std;
// operators performs the operation on any of the primitive data types, but if want to perform  operation on the user defined ie.specially in object oriented on class ie.of the objects it can not be done with the normal logic bcz any existing parameter does not accepts the object as a parameter
//If we want to use object of a class as the parameter(operand) then we have to change the meaning of an existing operator by using operator overloading, which is nothing but providing new meaning to an existing operator
class Demo  //creation of normal class with 2 charateritics & one default parametrised cons
{
    public:
    int x;
    int y;

    Demo(int i=10,int j=20)
    {
        x = i;
        y = j;
    }
};

//Demo is the return type of the operator overloaded func,operator is the keyword, '+' is the operator which performs addtion of two paramters ie.objects which are taken in the op1,and op2 as arguments. then we in the block,print cout then in return demo performs the addition of 'x' of obj1 with 'x'of obj2,and y of obj1 with y of the obj2 and returns it.
//then call goes to robj which intially contains(0,0) and the result gets stored in it by overriding x of robj with 62 and y with 122
Demo operator + (Demo op1,Demo op2)
{
    cout<<"Inside the operator"<<"\n";
    return Demo(op1.x+op2.x,op1.y+op2.y);
}
int main()
{
    Demo obj1(11,21);  //first object creation
    Demo obj2(51,101);  //second object creation
    Demo robj(0,0);  //3rd for taking ans 

    robj= obj1 + obj2;  //robj=+(obj1,obj2)
    cout<<robj.x<<"\n";   //62
    cout<<robj.y<<"\n";   //122
    return 0;
}
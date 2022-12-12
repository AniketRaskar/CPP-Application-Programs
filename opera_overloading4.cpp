#include<iostream>
using namespace std;
//in this progroam we have comapair the operators by using '==' operator overloading
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
//as it reutrns the true or false return type of the operator_overloaded function is made bool, it cheaks the condition inside the if 
bool operator == (Demo op1,Demo op2)
{
    if((op1.x == op2.x) && (op1.y == op2.y))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator > (Demo op1,Demo op2)
{
    if((op1.x > op2.x) && (op1.y > op2.y))
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    Demo obj1(11,21);
    Demo obj2(11,51);
    Demo robj(0,0);

    if(obj1 == obj2)
    {
        cout<<"Objects are same"<<"\n";
    }
    else
    {
        cout<<"Objects are different"<<"\n";
    }
    return 0;
}
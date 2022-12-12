#include<iostream>
using namespace std;
//in this progroam we are going to see operator overloading of pre-decrement and post-decreament operator
//similar like increment only change in sign.
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

Demo operator -- (Demo &op)
{
    op.x--;
    op.y--;
    return op;
}

Demo operator -- (Demo &op, int)
{
    op.x--;
    op.y--;
    return Demo(op.x+1,op.y+1);
}
int main()
{
    Demo obj1(11,21);
    Demo obj2(51,101);
    Demo robj1(0,0);
    Demo robj2(0,0);

    robj1 = --obj1;     //pre increment
    cout <<robj1.x <<"\n";   //10
    cout <<robj1.y <<"\n";   //20

    robj2 = obj2--;    //post increment
    cout << robj2.x <<"\n";   //51
    cout << robj2.y <<"\n";   //101
    return 0;
}
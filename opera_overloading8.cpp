#include <iostream>
using namespace std;

class Demo
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
Demo operator + (Demo op,int iNo)
    {
        op.x+iNo;
        op.y+iNo;
        return op;
    }
int main()
{
    Demo obj1(11,21);
    Demo obj2(51,101);
    Demo robj(0,0);

    robj= obj1 + 5;  //adding the value 5 in object value
    cout<<robj.x<<"\n";
    cout<<robj.y;
    return 0;
}
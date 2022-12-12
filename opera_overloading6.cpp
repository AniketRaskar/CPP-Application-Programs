#include<iostream>
using namespace std;
//in this progroam we are going to see operator overloading of pre-increment and post-increment operator
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
//when we are making pre operator overloading, ++operator takes object of Demo class in op reference,makes the increment and returns it.
Demo operator ++ (Demo &op)
{
    op.x++;
    op.y++;
    return op;
}
//when  we are making post increment ,complier says to take the object value in two arguments first as reference op,and second as a dummy integer with no value but compulsary to identifiy that it is the post increment.
//ti value increment keli pn post increment madhe value agodar initialise hote w nantr increment hote, mg ti value obj2 madhe stored hoti 51,101 tich value return denysathi return kartana tyaa object chya value 1 ne kami keli, mhnje object la pahili value milel 
Demo operator ++ (Demo &op, int)
{
    op.x++;
    op.y++;
    return Demo(op.x-1,op.y-1);
}
int main()
{
    Demo obj1(11,21);
    Demo obj2(51,101);
    Demo robj1(0,0);
    Demo robj2(0,0);

    robj1 = ++obj1;     //pre increment
    cout <<robj1.x <<"\n";   //12
    cout <<robj1.y <<"\n";   //22

    robj2 = obj2++;    //post increment
    cout << robj2.x <<"\n";   //51
    cout << robj2.y <<"\n";   //101
    return 0;
}
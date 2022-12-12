#include<iostream>
using namespace std;
//IT is just like calling the makeup artist to home for service, so that time for this function will be reduced. but if for this service require more machines. func's/loops/itteration then that artist can't come to our home , so that is request for inline fun.

//inline fuction is use to reduced the time complexivity of the function,if func is made inline then defiantion of the function getd copied at the point of function call,which reduced the execution time of our application
//it is a request if it gets accepted by the compiler then our function is considerd as inline function otherwise it works as a normal function
//genrally if the length of function is more,it cotains loop,recursion,larger data tpes then it is not considred as inline function.
class Demo
{
    public:
    //here we have made fun add inline.
        inline int Add(int no1, int no2)
        {
            int ans = 0;
            ans = no1 + no2;
            return ans;
        }
};

int main()
{
    Demo obj;
    int ret = 0;

    ret = obj.Add(10,11);

    cout<<ret<<"\n";        // 21

    return 0;
}
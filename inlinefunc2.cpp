#include<iostream>
using namespace std;
//by using the concept of inline function defination of function (method) gets called the caller object so that time for the execution gets reduced.
//inline is a request depends on the complexity of the function, if it gets accepted then it is considerd as inline else normal gets executed.
class Demo
{
    public:
    int Add(int no1, int no2);
    inline int sub(int no1,int no2);  // it is not compulsary to define the declared inline fun as pure virtual.

};
int Demo::Add(int no1,int no2)
{
    return no1+no2;
}
int Demo:: sub(int no1,int no2)
{
    return no1 - no2;
}
int main()
{
    Demo obj;
    int iRet =0;
    iRet = obj.Add(10,11);
    cout<<iRet<<"\n";

    iRet = obj.sub(12,10);
    cout<<iRet<<"\n";
    return 0;
}
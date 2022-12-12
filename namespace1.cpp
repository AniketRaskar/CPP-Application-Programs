#include<iostream>
//in this program we have created the namespace marvellous, in this we have created method fun, which is acces in main function with scope resolution operator.
namespace marvellous
{
    void fun()
    {
        std::cout<<"inside marvellous namespace"<<"\n";
    }
}
int main()
{
    std::cout<<"without namespace in main"<<"\n";
    marvellous::fun();
    //fun();    //error
    return 0;
}
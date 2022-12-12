#include<iostream>
//in this program we have created the namespace marvellous, in this we have created method fun.

namespace marvellous
{
    void fun()
    {
        std::cout<<"inside marvellous namespace"<<"\n";
    }
}
//here now in main we have use whole namespace, so that we can access everything in namespace marevellous without using scope resolution operator.
//if we use scope resolution operator then we get only those thing after the scope resolution operator.
int main()
{
    std::cout<<"without namespace in main"<<"\n";
    using namespace marvellous;
    fun();    
    return 0;
}
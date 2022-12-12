#include<iostream>
//in this program we have created namespace marvellous with method fun, and used it within the main function without namespace name, so it will error, that is we cannot acces method of namespace without using namespace-
// so it is better option for abstraction
namespace Marvellous
    {
       void fun()
        {
            std::cout<<"Inside marvellous"<<"\n";
        }
    }

//using namespace Marvellous;   //IF we use the namespace here then error will get solved.
int main()
{
    std::cout<<"Inside main"<<"\n";
    // fun();   //error

    return 0;
}
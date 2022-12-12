#include<iostream>
//In this program we have created two namespaces with  same method fun(), if we call that method then it will give ambiguty error, so for that we have to use that method using namespace name with the help of scope resolution operator.
namespace marvellous
{
   void  fun()
    {
       std:: cout<<"inside the marvellous fun"<<"\n";
    }
}
namespace Infosystem
{
    void fun()
    {
        std:: cout<<"Inside the Infosystem fun"<<"\n";
    }
}
int main()
{
    std:: cout<<"Inside the main"<<"\n";
    using namespace marvellous;
    using namespace Infosystem;
    //fun();   //error
    marvellous::fun();
    Infosystem::fun();
    
    return 0;
}
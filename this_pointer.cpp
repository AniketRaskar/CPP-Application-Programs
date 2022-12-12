#include<iostream>
using namespace std;

class Demo
{
    public:

    int x;  //characteritics
    int y;

    Demo(int a=10,int b=20)  //it is the constructor with default value
    {
        x=a;
        y=b;
    }

   //fun(&obj,51);   
   //fun(100,51);   (100 be address of fun function)
   //address 100 of object is taken by the this pointer,by that pointer we can access the variables stored in that object.
   void fun(int no)
   {
       cout<<"Inside the fun"<<endl;
      // cout<<this->x<< "\n"<<this->y;  //(10,20)  //this is also allowed as this pointer access the data from the fun in x&y
   }
};

int main()
{
    Demo obj;
    //when we call the function by using object name the address of the object gets called implicitly as the first parameter of that function
    //that address is accepted in one pointer called as 'this' pointer

    obj.fun(51);  //fun(&obj,51);   //fun(100,51);
    return 0;
}
#include<iostream>
using namespace std;

//due to function overloading progremer don't have to remember more names this is the advantage of the function overloading
class Demo
{
     //we have to make the class public in c++,bcz by default it is considerd as private.
    public:
    //here we have taken functions of same name with different no of aruguments,it can be done by using differnt types of arguments,diiferent no of aruments and also different squence of arguments ie.different function prototype
    
    //but it can not be done by changing return type of the arguments,"bcz return type of the function is  seen by the compiler lastly, (eg.return iAns) and as firstly it is seen by the compiler that in which function he have to go first,by the prototype so return value is not considred"
    
    //addition@2ii          -this is the 'name mangling' which done by the compiler while taveling from main function call to the function where it is declared.
    int addition(int no1,int no2) //as addition fun having 2 int,int compiler will see addition function having 2ii
    {
         int iAns=0;
         iAns=no1 + no2;
         return iAns;
    }
    
     //addition@3iii
    int addition(int no1,int no2,int no3)//as here addition fun having 3 iii compiler will see addition fun having 3iii
    {
         int iAns=0;
         iAns=no1 + no2 + no3;
         return iAns;
    }
     //addition@4iiii
    int addition(int no1,int no2,int no3,int no4)//here addition fun having 4 iiii compiler will see addition fun having 4iiii
    {
         int iAns=0;
         iAns=no1 + no2 + no3 + no4;
         return iAns;
    }

};
int main()
{
   Demo obj;
   int iRet=0;

    //PUSH 10
    //PUSH 20
    //CALL 1000 (suppose address of additon(int,int) function)
    //above are the assembly language syntaxes
    iRet = obj.addition(10,20);    //obj.addition@2ii(10,20)
    cout<<iRet<<endl;

    //PUSH 10
    //PUSH 20
    //PUSH 30
    //CALL 2000   (adress of addtion(int,int,int) function)
    iRet = obj.addition(10,20,30);  //obj.addition@3iii(10,20,30) 
    cout<<iRet<<endl;

    //PUSH 10
    //PUSH 20
    //PUSH 30
    //PUSH 40
    //CALL 3000
    iRet = obj.addition(10,20,30,40); //obj.addition@4iiii(10,20,30,40)
    cout<<iRet<<endl;

    return 0;
}


/*
flowing function overloadings are allowed
  changing no arguments
  void fun(int,int);
  void fun(int,int,int);

  changing types of arguments
  void fun(int,int);
  void fun(char,char);

  changing squence of arguments
  void fun(int,char,float);
  void fun(char,float,int);

NOT ALLOWED
changing return value
int fun();
float fun();
*/
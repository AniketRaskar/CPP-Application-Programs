#include<iostream>
using namespace std;

//main concept of protected access specifier is that variable in protected specifier can be given to it's imagiate child class only
//master cha 40% income for all ie. publilc ie.anyone can use, 30% for self ie.private ie. can't use anyother, 30% is protected ie.only for his girl, any other can't use that, tyachi nat pn use karu shakat nahi
class Demo
{
    public:
    int i;
    private:
    int j;
    protected:
    int k;  //it can be cheak by doing k=20;
};
class Hello : public Demo
{
    public:
    int x;
    private:
    int y;
    protected:
    int z;

    public:
    void fun()
    {
        cout<< k <<endl;  //protected variables can be use in only imagiate child class
    }
};
int main()
{
    cout<< sizeof(Demo)<<endl;  //it will give 12 bytes as Demo contains 3 int variable
    cout<< sizeof(Hello)<<endl;  //it will give 24 bytes as Hello contains 3 variables and 3 of inherited Demo class.
//here main function is the third nacked function so in this public variable will be used,privated can't be initialised,also protected can't be initialised 
    Demo dobj;
    cout<<dobj.i<<endl; //i is public, so it can be initialised
   // cout<<dobj.j<<endl;  //j is private, so it can't be initialised in this nacked function
   // cout<<dobj.k<<endl; //k is protected, so it can't be initialised in this nacked function

   Hello hobj;
   cout<<hobj.x<<endl;   //allowed
   //cout<<hobj.y<<endl;   //NA
   //cout<<hobj.z<<endl;  //NA

//as Demo is inherited in Derived class Hello ,here we haved initialied variable of Demo class with Hello class object
  
   cout<<hobj.i<<endl;//as i is public variable it is accesible 
   //cout<<hobj.j<<endl;  //as j is private variable it is not allowed
   //cout<<hobj.k<<endl;  //as k is protected variable it is not allowed

    hobj.fun();   //as fun() is method of derived class Hello, which contains protected variable of inherited class Demo, as it protected it can be used in imegiate child or derived class.   
    return 0;
}
/* all the values given by above program may be garbage beacause there is no constructor in the program ,bcz if program contains the constructor,we intialise the charateritics inside it,so it gets replced .but program does not contain constructor then charateritics are by deafault local variables i.e. auto storage class, so it may contains deafault value garbage */
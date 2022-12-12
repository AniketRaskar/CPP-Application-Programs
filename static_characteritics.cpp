#include<iostream>
using namespace std;
//It is not necessary to create the object for accesing the static characteritics,it can access by using only class name.
//it is not a good programing practise to initalise the static characteritics inside the constructor bcoz as constructor gets called when object of class is created, but we can access the static characteritics without creating object of a class,that's why it is the bad programers practise. 
//memory for static characteritics gets allocated at the load time ie.when exe gets loaded in the memory by the loader.
//memory for static variable gets allocated in the static segment,which is the part of data section
class Demo
{
    public:
    int i,j;   //i & j are the non-static variables. so it allocate 8 bytes of memory to the Demo class,for accesing this variable we have to use object name.
    static int x;  //it is static characteritics, ie. it is comman in all, it can be use in the sharing,as object creation is not required for static variables's (class variable) memory is not allocated to the static variables after the object creation

    Demo()
    {
        cout<<"Inside default demo constructor"<<endl;
        i=10;
        j=20;
        //x=40;  //it can be done but, by concept it is wrong, don't try this
    }
};
//it is good programing practice to intialize the static variable after the class declaration
int Demo :: x=30;   //static variable memory allocation, which can be done without object creation.

int main()
{
    cout<<Demo::x<<endl;  //it can be access before or without object creation of class.
    Demo obj;  // memory for non static(instance variable) gets allocated here as object is created here.If we create 'n' objects of a class , memory for the instance variable gets allocated n times,but for static variable it gets allocated only once. 
    return 0;
}
/*
1)static characteritics is like an pickle or onion dish in hotel, which is commoman in our table, while our thali's are separate
2) It is also like a plot which contains two 1BHK flats with commoman gallery passage,which can be used by both the flat holders
*/
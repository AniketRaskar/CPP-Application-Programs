#include<iostream>
using namespace std;
//Enumration is internally considerd as list of constant integers, when we declare enum memory gets allocated to it in text section. 
//by using enum we can design more readable and flexible application.
//By default the values for enumration members starts from zero and automatically incremented by one, it can be change explicitly.

int main()
{
    int Input=0;
    enum Gender {Male,Female};
    //enum Gender {Male=1,Female=2};   //now male have value 1 &female 2,in this way we can change the values explicitly.
    cout<<sizeof(Gender)<<"\n";  //4  //when we create any variable in enumration it is internally considerd as integral constant due to which it gets 4 bytes of memory.
    
    cout<<"0:Male"<<"\n";
    cout<<"1:Female"<<"\n";
    cout<<"Enter the input:"<<"\n";
    cin>>Input;

    switch (Input)
    {
    case Male:  //here input numbers can also be used.
        cout<<"I am a male"<<"\n";
        break;

    case Female:
        cout<<"I am a feamle"<<"\n";
        break;
    
    default:
        cout<<"plz give correct choise"<<"\n";
        break;
    }
    return 0;
}
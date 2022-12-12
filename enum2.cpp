#include<iostream>
using namespace std;
//enum or enumration is internally considerd as list or constants integers.
//For values in enum internally interger constant values get allocated, by which we can assess the enum variables.
int main()
{
    int Input=0;
    enum Marvellous {PPA,LB,LSP,PYTHON};
    int fees[]={15000,16000,17000,18000};
    float Duration[]={3.0,3.5,4.0,4.5};

    cout<<"0:PPA \n 1:LB \n 2:LSP \n 3:PYTHON \n";
    cout<<"Enter the Batch name's number \n";
    cin>>Input;

    switch (Input)
    {
    case PPA:
        cout<<"Thanks for contacting PPA"<<"\n";
        cout<<"Fess for the PPA are :"<<fees[PPA]<<"\n";
        cout<<"Duration of the PPA is:"<<Duration[PPA]<<"\n";
        break;
    case LB:
        cout<<"Thanks for contacting LB"<<"\n";
        cout<<"Fess for the PPA are :"<<fees[LB]<<"\n";
        cout<<"Duration of the PPA is:"<<Duration[LB]<<"\n";
        break;
    case LSP:
        cout<<"Thanks for contacting LSP"<<"\n";
        cout<<"Fess for the PPA are :"<<fees[LSP]<<"\n";
        cout<<"Duration of the PPA is:"<<Duration[LSP]<<"\n";
        break;

    case PYTHON:
        cout<<"Thanks for contacting pyrton"<<"\n";
        cout<<"Fess for the PPA are :"<<fees[PYTHON]<<"\n";
        cout<<"Duration of the PPA is:"<<Duration[PYTHON]<<"\n";
        break;

    
    default:
        cout<<"plz give the correct choise \n There is no such batch in marevellous";
        break;
    }
    return 0;

}
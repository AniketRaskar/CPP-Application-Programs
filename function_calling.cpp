#include<iostream>
using namespace std;

//call_value ne value a madhe dili mhnun function ne (dukandar) ti value tyachya variable madhe ghetli, dukanatun ti value increment karun dili,pn ti tyachya bhandyat aslyamul original 'a' bhandhyala kahi pharak padla nahi mhanun value unchanged rahili.
void call_value(int no)
{
    no++;
}

//call_address ne variavle cha address mhnun to address function ne pointer madhe ghetla,pointer ne tya address chya value la points karun, ani dukanatun ti value increment karun dili, mhanun ti actual value increment zali ani 21 banli
void call_address(int *p)
{
    (*p)++;
}

//call_reference ne value 'c' pass keli mhnun ti value function ne reference madhe ghetli,(reference madhe ghetlyamul tya value name jari change zal asl tari value tich rahili), ani ti value function ne increment karun dili parinami value increment zali)
void call_reference(int &Ref)
{
    Ref++;
}

int main()
{
    int a=10,b=20,c=30;

    call_value(a);
    cout<<a<<endl;     //10

    call_address(&b);
    cout <<b<<endl;     //21

    call_reference(c);
    cout<<c<<endl;      //31

    return 0;

}
#include<iostream>
using namespace std;

#define MAX 10   //this is the micro
//typedef cannot be defined int this way, for this we can define typedef in eighter main function or in header file.
//by the concept of typedef we can assign new name to an existing primitive or derived or user defined data type,when we create typedef entry of that perticular data type gets resisterd in the data type table(symbol table) created by the compiler
//it is used for simplifying the complicated sysntax of the datatype
int main()
{
    typedef int NUMBER;
    typedef char LETTER;

    NUMBER no = 11;
    LETTER ch = 'M';

    cout<<sizeof(no)<<"\n";
    cout<<no<<"\n";

    cout<<sizeof(ch)<<"\n";
    cout<<ch<<"\n";

    typedef const int * CPTR;
    // const int *p = NULL;
    CPTR p = &no;
    p = &no;

    cout<<*p<<"\n";

    return 0;
}
#include <iostream>
using namespace std;

void reference()
{

}
int main()
{
    int no =11;
    int &X = no;  //new name for variable no
    cout<<X<<"\n";
    int &Y = X;  //creating reference for reference
    cout<<Y<<"\n";
    int *p = &no; //creating pointer
    cout<<*p<<"\n";
    int &(q) = *p;  //creating reference for pointer
    cout<<q;

    int Arr[] = {10,20,30,40}; //creation of array
    int (&Brr)[4] = Arr;  //creation of reference for array
    return 0;
}
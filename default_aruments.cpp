#include<iostream>
using namespace std;

//default value must be at the last parameter of the function.

//function accepts the arguments in float and returns aslo in the float form.

//also function have default values of the radius and PI which he will use depends on wheather programmer will pass the value and how many.
float area(float radius=12,float PI=3.14)    
{
    float fAns=0;
    fAns = PI * radius*radius;
    return fAns;
}
int main()
{
    float fRet =0;

   //here function have not passed any value, so for both parameters defalut values will be use by the area function. 
    fRet= area();
    cout<<fRet<<endl;   //452.16
   
   //here function have passed one value,so by sequence it will taken by radius and for PI default value will be taken by the compiler for the function.
    fRet= area(10);
    cout<<fRet<<endl;   //314
   
    //here we have pass both the values for the function, so it will be taken by the area function, no default values of the area functoin will be used.
    fRet=area(10,5);
    cout<<fRet<<endl;    //500

    return 0;

}
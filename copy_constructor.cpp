#include<iostream>
using namespace std;

//Default- ahe tashi pawbhaji
//Parametrised- pawbhaji with batter and cheese
//Copy- pawbhaji like near by table

//for creating copy constructor we have to use the referece '&' operator, if we don't use it , it gets recursively called 
class Demo
{
    public:
    int x;   //non-static characteritics
    int y;

    Demo() //Default constructor creation by passing no arguments
    {
        cout<<"Inside Default constructor \n";
        x = 0;
        y = 0;
    }
    Demo(int i,int j)//parameteried constructor creation via passing parameters
    {
        cout<<"Inside the parameterised constructor \n";
        x = i;
        y = j;
    }
    //receving like :Demp(obj1)
    //taking the parameter by creating the reference of obj;
    // Demo &ref = obj1;
    Demo(Demo &ref)   //Copy constructor creation via passing the reference
    //taking the address in reference variable 
    {
        cout<<"Inside the copy constructor \n";
        x = ref.x;
        y = ref.y;
    }
    ~Demo()   //Destructor ,it gets call automatically after the consttructor
    {
        cout<<"Inside the Destructor \n";
    }
};

int main()
{
    Demo obj1;  //object created for default constructor
    Demo obj2(11,21);  //object created for parameterised constructor by passing parameters
    Demo obj3(obj1);   //object creation for copy constructor by passing another object (ie.address of another object -ani tyala sangato yasarkh banwun de)
    
    return 0;
}
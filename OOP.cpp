# include<iostream>
using namespace std;

class Arithmatic
{
    public:
    
    int iNo1=0;
    int iNo2=0;

     Arithmatic()
    {
       cout<<"In the default constructor \n";
    }

    Arithmatic(int A,int B)
    {
        cout<<"In the parameterised constructor \n";
    }

    ~Arithmatic()
    {
        cout<<"Inside the distructor \n";
    }

    int Addition(int iNo1,int iNo2)
    {
        int iAns=0;
        iAns= iNo1+iNo2;
        return iAns;
    }

    int substraction(int iNo1,int iNo2)
    {
        int iAns=0;
        iAns=iNo1 - iNo2;
        return iAns;
    }


};
int main()
{   
    int iValue1,iValue2,iRet=0;  
    //in this we are unable to do it auto bcz by default keywords in the local scope are made auto by the compiler, & if we do it explicitly then it becomes twice which gives the error
      
    cout<<"Enter the first number:\n";
    cin>> iValue1;

    cout<< "Enter the second number:\n";
    cin>> iValue2;

    Arithmatic obj1;//for default constructor don't make obj(),if we give obj1(),it don't genrate error not calls default constructor
    Arithmatic obj2(iValue1,iValue2);

    iRet =obj2. Addition(iValue1,iValue2);    //we can call the function by any object which is created above
    cout<<"Addition of two numbers is :"<<iRet <<"\n";
    

    iRet=obj2.substraction(iValue1,iValue2);
    cout<<"substraction of two numbers is:"<<iRet<<"\n";

    
    return 0;
}

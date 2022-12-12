#include<iostream>
using namespace std;

class Demo
{
    public:
        int Add(int no1, int no2)
        {
            int ans = 0;
            ans = no1 + no2;
            return ans;
        }
};

int main()
{
    Demo obj;
    cout<<sizeof(obj)<<"\n";        // 1
    //as the class Demo not containg non static characterics size will be 0 bytes, but due to this there will be no existance of the object of Demo on the memory,due to this we can't access the members of the objects. Due this drawback compiler allocates 1 byte of memory for such object for his existance. 

    int ret = 0;

    ret = obj.Add(10,11);

    cout<<ret<<"\n";        // 21

    return 0;
}
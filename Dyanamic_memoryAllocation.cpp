#include <iostream>
using namespace std;

int main()
{
    int Arr[5]; //statically memory allocation
    int *Brr = NULL;
    Brr = new int[5];  //dyanamically memory creation and holding the starting address into Pointer Brr

    if(Brr ==NULL)
    {
        cout<<"Unable to allocate the memory.\n";
    }
    else
    {
        cout<<"Memory allocated succesfully with address:"<<Brr<<"\n";
    }

    //delete Brr; //deallocating the memory of first element of array only due to absence of [] ,it causes memory leak.(use of [] is better programing nahitr memory leak hote)
    
    delete []Brr;  //deallocating memory of whole array.
    return 0;
}
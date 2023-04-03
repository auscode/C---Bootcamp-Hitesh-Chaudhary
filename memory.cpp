#include <iostream>
using namespace std;

int main()
{

    int *myp;
    // if you use new  you must delete it
    try
    {
        myp = new int[100];
        cout << "Memory space allocated" << endl;
    }
    catch (...)
    {
        cout << "failed in memory allocation" << endl;
    }

    // FOR single vairable fre resource
    // delete myp
    //  for array
    delete[] myp;

    return 0;
}
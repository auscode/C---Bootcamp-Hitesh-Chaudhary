#include <iostream>
using namespace std;

int main()
{
    // int int_arr[4];
    int int_arr[4] = {1, 2, 3, 4};
    // cout << int_arr << endl; // it is pointing to the address of the first element
    cout << int_arr[3] << endl;

    int nextArray[4];
    nextArray[0] = 9;
    nextArray[1] = 19;
    cout << nextArray[2] << endl;

    *nextArray = 30;
    cout << nextArray[0] << endl;
    cout << nextArray[1] << endl;
    int *arp = nextArray;
    arp++;
    *arp = 209;
    cout << nextArray[1] << endl;

    return 0;
}
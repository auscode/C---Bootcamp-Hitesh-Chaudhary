#include <iostream>
#include <string>
using namespace std;

template <typename T>
T getBigger(T a, T b) {
    return (a>b)?a:b;
}


int main()
{
    cout <<getBigger(3,5)<<endl;
    cout << getBigger(3.5, 5.2) << endl;

    return 0;
}
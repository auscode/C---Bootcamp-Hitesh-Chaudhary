#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
    list<int> myList;
    for (int i = 3; i <= 10; ++i)
    {
        myList.push_back(i);
    }
    cout << myList.front() << endl;

    cout << myList.back() << endl;

    // dont use reverse when you are using custom class or fucntion
    myList.reverse();

    for (auto i : myList)
    {
        cout << i << " ";
    }
    cout << endl;

    myList.sort();

    for (auto i : myList)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

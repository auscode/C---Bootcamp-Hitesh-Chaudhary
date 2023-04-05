#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> myints = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int a : myints)
    {
        cout << a << " ";
    }
    cout << endl;

    // partition the above arrays
    partition(myints.begin(), myints.end(), [](auto x)
              { return x % 2 == 0; });

    // stable_partition(myints.begin(), myints.end(), [](auto x)
    //                  { return x % 2 == 0; });

    for (int a : myints)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}
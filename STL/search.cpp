#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num[6] = {3, 1, 7, 4, 9, 6};
    cout << "Unsorted Values" << endl;

    for (int n : num)
    {
        cout << n << " ";
    }

    // sorting using stl
    sort(num, num + 6);

    // binary search
    // binary search(forward iterator first, forward iterator last,const &)
    //  binary_search(num, num +6, 7);
    if (binary_search(num, num + 6, 7))
    {
        cout << "Number Found" << endl;
    }
    else
    {
        cout << "Number Not Found" << endl;
    }

    cout << "\nSorted Values" << endl;
    for (int n : num)
    {
        cout << n << " ";
    }

    return 0;
}
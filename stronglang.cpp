#include <bits/stdc++.h>
using namespace std;

string api_call()
{
    return "got some data from web";
}

int another_api_call()
{
    return 5;
}

int main()
{
    auto response = api_call();
    auto rep = another_api_call();

    cout << "API CALL VALUE: " << response << endl;
    cout << "Another API CALL VALUE: " << rep << endl;

    if (typeid(response) == typeid(string))
    {
        puts("\ntype of both id matches\n");
    }
    if(typeid(rep) == typeid(int))
    {
        puts("\ntype of both id matches\n");
    }

    return 0;
}
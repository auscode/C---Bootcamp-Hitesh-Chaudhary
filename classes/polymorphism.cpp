#include <iostream>
#include <string>
using namespace std;

class One
{
public:
    // virtual can be used to remove pointer ambiguity
    virtual void intro()
    {
        cout << "I am One\n"
             << endl;
    }
};

class Two : public One
{
public:
    void intro()
    {
        cout << "I am Two\n"
             << endl;
    }
};
class Three : public One
{
public:
    void intro()
    {
        cout << "I am Three\n"
             << endl;
    }
};

int main()
{
    One *a;
    Two b;
    Three c;

    a = &b;
    a-> intro();

    a = &c;
    a->intro();
    // a.intro();
    // b.intro();
    // c.intro();

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Money
{
public:
    void gotMoney() { puts("Got 5M in my account"); }
};

class Man
{
    string _name;
    int _age;
    Man() {}
    // making it friendly
    friend class Superman;

protected:
    Man(const string &name, const int age) : _name(name), _age(age) {}
    void run() { puts("I can run"); }

public:
    void sayName() const;
};

void Man::sayName() const
{
    cout << "My name is " << _name << " and age is " << _age << endl;
}

class Superman : public Man
{
    bool _flight;

public:
    // using man from inherited class constructor
    Superman(string name) : Man(name, 26){};
    // suppose i want to use age here
    // you can use getter in public or an unusual way that is friend
    void run() { printf("I can Run at light speed %d\n", _age); }
};

class Spiderman : public Man, public Money
{
    bool _webbing;

public:
    // using man from inherited class constructor
    Spiderman(string name) : Man(name, 19){};
    void run() { puts("I can Run at normal speed"); }
};

int main()
{
    Superman clark("kent");
    clark.sayName();
    clark.run();

    Spiderman peter("peter");
    peter.sayName();
    peter.run();
    peter.gotMoney();

    return 0;
}
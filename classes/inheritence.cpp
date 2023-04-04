#include <iostream>
#include <string>
using namespace std;

class Man{
    string _name;
    int _age;
    Man(){}
protected:
    Man(const string & name,const int age): _name(name), _age(age){}
    void run(){puts("I can run");}
public:
    void sayName()const;
};

void Man::sayName()const{
    cout<<"My name is "<<_name<<" and age is "<<_age<<endl;
}

class Superman : public Man {
    bool _flight;
public: 
    //using man from inherited class constructor
    Superman(string name): Man(name,26){};
    void run(){puts("I can Run at light speed");}
};

class Spiderman : public Man
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

    return 0;
}
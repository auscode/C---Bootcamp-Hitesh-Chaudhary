#include <iostream>
#include <string>
using namespace std;

// creating class
class User
{
private: // it is here by default
    // data member
    int secret;

public:
    // data memebr
    string name = "Default";
    // methods
    void classMsg() { cout << "Class is Great, " << name << endl; }
    
};

int main()
{
    // creating object
    User shane;
    shane.name = "Shane";
    shane.classMsg();

    // private
    // sam.secret = "secret";

    User elai;
    elai.name = "Elai";
    elai.classMsg();

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

// creating class
class User
{
private: // it is here by default
    // data member
    int _secret;

public:
    // data memebr
    string name = "Default";
    // methods
    void classMsg() { cout << "Class is Great, " << name << endl; }
    // const is added for protection
    void setSecret(const int &newSecret)
    {
        _secret = newSecret;
    }
    int getSecret()
    {
        return _secret;
    }
};

int main()
{
    // creating object
    User shane;
    shane.name = "Shane";
    shane.classMsg();
    shane.setSecret(333);
    cout<< shane.getSecret() << endl;
    // private
    // sam.secret = "secret";

    User elai;
    elai.name = "Elai";
    elai.classMsg();

    return 0;
}
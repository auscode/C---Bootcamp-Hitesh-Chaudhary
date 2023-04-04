#include <iostream>
#include <string>
using namespace std;

// creating class
class User
{
private: // it is here by default
    // data member
    int _secret=22;

public:
    // data memebr
    string name = "Default";
    // methods
    void classMsg();
    // const is added for protection
    void setSecret(const int &newSecret) { _secret = newSecret; }
    // making it const qual fucntion 
    int getSecret() const;
};

void User::classMsg()
{
    cout << "Class is Great, " << name << endl;
}

// thats how to create a const fucntion seperately
int User::getSecret() const { return _secret; }

int main()
{
    // creating object
    User shane;
    shane.name = "Shane";
    shane.classMsg();
    shane.setSecret(333);
    cout << shane.getSecret() << endl;
    // private
    // sam.secret = "secret";

    User elai;
    elai.name = "Elai";
    elai.classMsg();

    // const qualtification 
    const User rock;
    cout << rock.getSecret() << endl;


    return 0;
}
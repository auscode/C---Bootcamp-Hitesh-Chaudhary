#include <iostream>
#include <string>
#include <memory>
using namespace std;

class User
{
public:
    User()
    {
        cout << "User Created" << endl;
    }
    ~User()
    {
        cout << "User Destroyed" << endl;
    }
    void testFunc()
    {
        cout << "I am A test fucn\n";
    }
};

int main()
{

    {
        // non fav.way fro dev
        //  unique_ptr<User> shane(new User());
        unique_ptr<User> shane = make_unique<User>();
        shane->testFunc();

        //this is not allowed copy is not allowed 
        // unique_ptr<User> elai = sam;
    }

    {
        //dont use this because we are playing with memory
        // shared_ptr<User> tim (new User());
        shared_ptr<User> tim =make_shared<User>();
        //this is not keeping track of weak ptr and every other pointer is keep tracked of
        weak_ptr<User> wtim = tim;
        shared_ptr<User> timm =tim;
    }
    cout<<"Outside Code"<<endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Phone
{
    string _name = "";
    string _os = "";
    int _price = 0;
    // default constructor
    Phone();

public:
    // lets say parameter constructor
    Phone(const string &name, const string &os, const int &price);
    // copy constructor
    Phone(const Phone &);
    // getter
    string getName() {
        printf("Value of get name is %p\n", this);
        return _os; 
    }

    int getPrice();
    // destructor
    ~Phone();
};

int Phone::getPrice(){
    printf("Value of get price is %p\n",this);
    return _price;
}


// class name :: method name : default values overridden
Phone::Phone() : _name(), _os("Andy"), _price()
{
    puts("Default constructor");
}

Phone::Phone(const string &name, const string &os, const int &price) : _name(name), _os(os), _price(price)
{
    puts("this is param cosntructor");
}

Phone::Phone(const Phone & values){
    puts("Overwrite Copy constructor");
    // default 
    _name = "new"+values._name;
    // overwrite
    _os = "skinned-"+values._os;
    _price = values._price;
}

Phone::~Phone() {
    printf("Destructor called for %s\n",_name.c_str());
    //c_str funtion is used
}

int main()
{
    // Phone samsungA1;
    // cout << samsungA1.getName() << endl;

    Phone OnePlus8("OnePlus8", "Android-Oxy", 3499);
    cout << OnePlus8.getName() << endl;

    printf("Value of object if %p\n", &OnePlus8);
    
    cout << OnePlus8.getPrice() << endl;
    
    Phone OnePlus8S = OnePlus8;
    cout << OnePlus8S.getName() << endl;

    return 0;
}
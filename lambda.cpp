#include <iostream>
#include <string>
using namespace std;

int main()
{
    // this is lambda 
    []{cout<< "Hello im in lamda\n";}();
    
    // using it with return type 
    [](){return 100;};

    //generalised lambda function
    auto sum = [] (auto a, auto b){return a+b;};

    cout<<"SUm of 2 and 5 is : "<< sum(2,5)<<endl;
    cout << "SUm of 2.5 and 5.5 is : " << sum(2.5, 5.5) << endl;

    string a= "abc";
    string b = "abc";
    cout<<sum(a,b)<<endl;
    return 0;
}
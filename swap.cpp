#include <iostream>
#include <string>
using namespace std;

void swap(int &a, int &b) {
    // move semetics 
    int temp =move(a);
    a=move(b);
    b=move(temp);
}

string printMe(){
    return "I am Print";
}
int main()
{
    int a= 3;
    int b= 4;
    swap(a,b);
    cout<<"A: "<<a<<" B: "<<b<<endl;

    // copying value of fxn in the s 
    string s = printMe();

    //moving the value of fxn move semantics
    string&& ss = printMe();

    return 0;
}
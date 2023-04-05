#include <iostream>
#include <string>
using namespace std;

class MyFloat{
    float _ft;
    public:
        MyFloat(){
            _ft =0.1;
        }
        void getValue(){
            cout<< _ft <<endl;
        }
        void operator()(float v){
            _ft += v;
        }
};
int main()
{
    MyFloat floaty;
    floaty.getValue();

    floaty(1);
    floaty.getValue();

    floaty(1.3);
    floaty.getValue();

    return 0;
}
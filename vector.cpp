#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Corners{
    float a,b,c,d;

};

// overriding <<
ostream& operator<<(ostream& stream,const Corners& corners){
    stream<<corners.a<<" "<<corners.b<<" "<<corners.c<<" "<< corners.d<<endl;
    return stream;
}

int main()
{
    vector<int> num;
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);
    num.push_back(5);
    
    for (auto i = num.begin(); i!=num.end(); ++i){
        cout << *i << endl;
    }

    vector<Corners> corners;
    corners.push_back({1,2,3,4});
    corners.push_back({5,6,7,8});

    for (int i = 0; i < corners.size(); ++i){
        cout << corners[i]  << endl;
    }


    return 0;
}
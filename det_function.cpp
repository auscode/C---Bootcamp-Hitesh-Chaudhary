#include <iostream>
#include "adder.h"
using namespace std;

void lifeUp(int *life)
{
    ++(*life);
}

// void lifeUp1(int life)
// {
//     ++life;
// }
// void lifeUp2(int &life)
// {
//     ++life;
// }


//templates 
template <typename T>

T addme (T a, T b){
    return (a + b);
}

int main()
{
    int life = 3;
    lifeUp(&life);
    cout << life << endl;
    // lifeUp1(life);
    // cout << life << endl;
    // lifeUp2(life);
    // cout << life << endl;

    int v1 = 4;
    int v2 = 5;
    cout<<addme(v1, v2)<<endl;
    float v3 = 1.0f;
    float v4 = 1.6f;
    cout<<addme(v3,v4)<<endl;


    return 0;
}
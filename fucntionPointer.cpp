#include <iostream>
using namespace std;

int getTwo(){
    return 2;
}


// watch closely
void intersting(){
    puts("I am Intersting");
}

int main()
{
    int whatIGot = getTwo();

    //functional Pointer 
    void (*pointstoIntersting)()=intersting;

    cout<<whatIGot<<endl;

    pointstoIntersting();
    (*pointstoIntersting)();

    return 0;
}

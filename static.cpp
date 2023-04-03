#include <iostream>
using namespace std;

int lifeUp(){
    // int life =3;
    static int life = 3;
    return ++life;
}

int main(){
    int life =3;
    cout << "YOur Starting game life is:" << life << endl;

    life = lifeUp();
    printf("Your Updated game life is: %d\n", life);

    life = lifeUp();
    printf("Your Updated game life is: %d\n", life);

    return 0;
}
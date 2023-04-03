#include <iostream>
using namespace std;

int sayTwo()
{
    return 2;
}
void sayHello()
{
    puts("Hello");
}
void sayThree()
{
    puts("3");
}

int main()
{
    sayHello();
    // sayTwo();
    printf("%d\n", sayTwo());
    sayThree();
    return 0;
}

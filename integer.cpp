#include <iostream>
using namespace std;

int main()
{
    printf("Size of theis data type is %ld bits\n", sizeof(uint16_t) * 8);
    // unsigned int with teh size forcing it to tyhe 16 bytes

    int fun = 22;
    // int fun = 0b00010110; binary
    // int fun = 0x16; hexadec
    // same as above declaration
    printf("fun value is %d\n", fun);
}
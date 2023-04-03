#include <iostream>
using namespace std;

// preprocessor constants 
#define PI 3.14

// OR 
// they automatically starts increasng from 0 to ->
//uint8_t used here to save memory to use int as 8 bit unsigned
enum MsOffice:uint8_t {
    BOLD=6,
    ITALICS,
    UNDERLINE,
    CROSSED,
    HATCHED
};

int main()
{

    int myAttributes = CROSSED;

    cout<<myAttributes<<endl;

    return 0;
}
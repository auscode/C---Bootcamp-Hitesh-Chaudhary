#include <iostream>
using namespace std;

// funny use
#define END return 0
#define ENDMSG cout << "Program ends here\n"
// important use
#define LCOINT int16_t
#define LCOCCPC const char* const
#define console_log(a) cout<<a<<endl

int main()
{
    // int a = 4;
    // or
    LCOINT a = 4;
    // cout << a << endl;
    console_log(a);
    string ab = "hello";
    console_log(ab);

    ENDMSG;
    END;
}
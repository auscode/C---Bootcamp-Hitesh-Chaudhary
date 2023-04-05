#include <iostream>
#include <string>
using namespace std;

constexpr int maxbuffer = 1024;

int main()
{

    const char *filename = "mythisfile.txt";
    const char *information = "lorem ipsum dolor sit amet";

    // FILE *f = fopen(filename, "w");
    // for (int i = 0; i < 50; ++i)
    // {
    //     fputs(information, f);
    //     cout << endl;
    // }
    // fclose(f);

    char buf[maxbuffer];
    FILE *f = fopen(filename, "r");
    while(fgets(buf,maxbuffer,f)){
        fputs(buf,stdout);
    }
    fclose(f);

    // static const char * originalFile ="originalfile.txt";
    // static const char *editedFile = "editedfile.txt";

    // rename(originalFile,editedFile);
    // remove(originalFile);
    // for using file system
    // read mode "r" , "w" write mode
    // FILE *f = fopen(originalFile, "w");
    // fclose(f);

    return 0;
}
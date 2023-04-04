#include <iostream>
using namespace std;

#define NULL 0

void printVal(int a)
{
    printf("Integer Value is: %d\n", a);
}

void printVal(double a)
{
    printf("Integer Value is: %f\n", a);
}

// it runs with warning but not with error
void printVal(int *a)
{
    printf("Integer Value is: %p\n", a);
}

int main()
{
    // printVal(5.3);
    printVal(nullptr);

    return 0;
}
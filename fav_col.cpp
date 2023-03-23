#include <iostream>
// <> for already defined library
// ""  for user defined library

int main()
{
    // std::cout << "Hello There" << std::endl;
    // puts("Hello There");

    int number;
    std::cin >> number;
    printf("Your id is %d", number + 3);
    //%d is placeholder its vale calculated after comma
    return 0;
}
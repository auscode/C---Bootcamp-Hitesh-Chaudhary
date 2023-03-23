#include <iostream>
// <> for already defined library
// ""  for user defined library

int main()
{
    std::string my_color;
    std::cout << "Enter your fav. color: \n";
    getline(std::cin, my_color); // for taking input instead of cin
                                 //  getline(which method to use , where you want to store )
    std::cout << "Hey " << my_color << " is my favorite too"<<std::endl;
    return 0;
}
// std::cout << "Hello There" << std::endl;
// puts("Hello There");

// int number;
// std::cin >> number;
// printf("Your id is %d", number + 3);
//%d is placeholder its vale calculated after comma

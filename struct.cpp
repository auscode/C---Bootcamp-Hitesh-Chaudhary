#include <iostream>

struct User
{
    const int uId;
    const char *name;
    const char *email;
    int course_count;
};

int main()
{
    User shane = {001, "shane", "shane@slug.com", 2};
    User elai = {001, "elai", "elai@slug.com", 3};

    //here we are putting data type of user because we are
    //returning a struct type not int or something.
    User *e = &elai;

    std::cout << shane.email << std::endl;
    elai.course_count = 5;
    elai.email = "terra@slug.com";
    //this uid cant be changed becuase of * ->
    // elai.uId = 221;

    std::cout << elai.email << std::endl;

    e->course_count = 12;
    std::cout << elai.course_count << std::endl;

    return 0;
}
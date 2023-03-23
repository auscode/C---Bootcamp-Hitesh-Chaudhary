/*TYPE 1*/

// #include <iostream>

// int main(int argc, char **argv){
//     std::cout<<"Hello world!"<<std::endl;
//     return 0;
// }

/*TYPE 2*/
#include <cstdio>
// using namespace std;

int main()                   // paranthesis
{                            // braces
    puts("Click on Button"); // it is known as a statement
    puts("Create a new Player");
    puts("add life to a player");

    int card;
    card = 40;
    int my_card = card;

    int *myp;
    myp = &card;

    my_card = *myp;
    printf("vale of myp is %d", my_card);
    printf("vale of myp is %p", myp);
    printf("vale of myp is %d", my_card);

    return 0;
}
//[] brackets

void nothing()
{
    puts("Hello World!");
}

char iamchar()
{
    return 'c';
}

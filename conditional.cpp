#include <iostream>
using namespace std;

int main()
{
    int rating = 4;
    if (rating == 5)
    {
        puts("5 Star Rated ");
    }
    else if (rating == 4)
    {
        puts("4 StarRated ");
    }
    else
    {
        puts("Not 4 or 5 Star rated");
    }

    if (0)
    { // it will neber running or False and vice versa
        puts("Go for it");
    }
    // ternary operator
    printf("Your rating feedback is %s ", rating > 4 ? "true" : "false");

    switch (rating)
    {
    case 1:
        puts("1st case");
        break;
    case 2:
        puts("2nd case");
        break;
    case 3:
        puts("3rd case");
        break;

    default:
        puts("At the default section");
        break;
    }

    return 0;
}
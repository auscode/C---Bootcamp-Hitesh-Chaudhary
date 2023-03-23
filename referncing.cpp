#include <iostream>

int main()
{
    int score = 200;
    int *myp = &score;
    // * pointers stores address

    printf("Value of Score: %d\n", score);
    printf("Value of pointer Score: %p\n", myp);

    int &another_score = score;
    //& reference
    another_score = 400; // it also updates the value of score like a variable

    printf("Value of Score: %d\n", score);
    printf("Value of pointer Score: %p\n", myp);

    return 0;
}
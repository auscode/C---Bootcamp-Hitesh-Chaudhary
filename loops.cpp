#include <iostream>
using namespace std;

int main()
{
    char my_string[] = "harshit";
    char my_name[] = {'h', 'a', 'r', 's', 'h', 'i', 't', 0};
    printf("My name is : %s\n", my_string);

    cout << "take a break" << endl;

    for (int i = 0; my_name[i]; i++)
    {
        cout << "Character is:" << my_name[i] << endl;
    }
    cout << "take a break2" << endl;
    for (char *cp = my_name; *cp != 0; cp++)
    {
        cout << "Character is : " << *cp << endl;
    }

    cout << "take a break3" << endl;
    for (char i:my_name){
        if(i==0) break;
        cout<<"Character is : "<<i << endl;
    }







    // int myNum[]={1,2,3,4,5,6,7};

    // Range Based loop over OR for Each loop
    // for(intialization colon(:) iteratable)
    //  for (int i:myNum){
    //      cout<<" "<<i<<endl;

    // }

    // For loop over
    // for (intialiser, comparator, incrementor)
    //  for (int i=0; i<5 ; i++){
    //      cout<<myNum[i]<<" "<<endl;
    //  }

    // do while loop over
    // do
    // {
    //     cout << "Current number is: " << myNum[i] << endl;
    //     i++;
    // } while (i < 5);
    // while loop over
    // while(i<6 ){
    //     if (i==3){
    //         cout << "special thing"<< endl;
    //         i++;
    //         continue;
    //     }
    //     cout<<"Current number is: "<<myNum[i]<<endl;
    //     i++;
    // }
    cout << "outside loop" << endl;
    return 0;
}
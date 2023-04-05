#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int num[6]={3,1,7,4,9,6};
    float num[6] = {3.2, 1.1, 7.4, 4.2, 9.6, 6.1};
    cout<< "Unsorted Values"<<endl;
    
    for (float n: num){
        cout<<n<<" ";
    }

    // sorting using stl 
    sort(num,num+6);
    //heap sort
    // sort_heap(num, num+6);

    cout << "\nSorted Values" << endl;
    for (float n : num)
    {
        cout << n << " ";
    }

    return 0;
}
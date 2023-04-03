#include <iostream>
using namespace std;

int main()
{
    // float call_api = 2.0;
    float call_api = 2.0;
    // char call_api ='h';

    try{
        cout<<"trying to use API values \n";
        throw call_api;
        cout<<"No COde execute after return & throw"<<endl;
    }catch(int e){
        cout<<"integer exception handled"<<endl;
    }
    catch (float f)
    {
        cout << "float exception handled" << endl;
    }
    catch(...){
        cout<<"Something went wrong"<<endl;
    }

    cout<<"Keep on mving with the rest code"<<endl;
    return 0;
}
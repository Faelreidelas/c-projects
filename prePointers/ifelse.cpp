#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    
    int age;
    cout << "enter your age ";
    cin >> age;

    if(age >> 10){
        cout << "congratulations";
    }

    else{
        cout << "you are so young";
    }


    return 0;
}

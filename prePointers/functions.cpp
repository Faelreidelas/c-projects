#include <iostream>
#include <string>
using namespace std;

int add(int x,int y){

    return x + y ;


}

void tst(int n, string text){
    for (int i = 0; i <= n;i++){
        cout << text << endl;
    }
}

int main () 
{
    
    tst(5,"hello word");

    //
    int result = add (2,3);
    cout << result << endl; 
    // 
    // 


}
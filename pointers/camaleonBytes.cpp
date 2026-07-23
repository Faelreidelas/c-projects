
#include <iostream>
#include <string>
using namespace std;


int main () 
{
    char camaleon[4] = {0x41, 0x42, 0x43, 0x00};

    void* p = &camaleon;

    
    char* ponteiroTexto = reinterpret_cast<char*>(p);
    cout << ponteiroTexto << endl;

    int* ponteironumero = reinterpret_cast<int*>(p);
    cout << *ponteironumero << endl;

    
}
 //
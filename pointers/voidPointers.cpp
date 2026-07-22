#include <iostream>
#include <string>
using namespace std;


int main () 
{
    int idadade = 22;
    void* vlrgenerico = &idadade;

    int* vlreal = (int*)vlrgenerico;
    
}
 //
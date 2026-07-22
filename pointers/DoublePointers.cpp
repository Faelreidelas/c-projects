#include <iostream>
#include <string>
using namespace std;

 //double pointers are pointers that point to another pointer. They are used when you want to modify the value of a pointer in a function or when you want to create a pointer to a pointer.
int main () 
{
    int valor = 10;
    int *p1 = &valor;
    int **p2 = &p1;

    cout << "valor do int normal" << valor << endl;
    cout << "valor do ponteiro normal" << *p1 << endl;
    cout << "valor do segundo ponteiro" << **p2 << endl;

    **p2 = 500;
    cout << "valor do valor alterado" << valor << endl;
}
 //
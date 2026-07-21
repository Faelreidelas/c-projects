#include <iostream>
#include <string>
using namespace std;


int main () 
{
    string freePizzas[5] = {"Cheese", "Pepperoni", "Veggie", "Hawaiian", "Meat Lovers"}; 
    string *pFreePizzas = &freePizzas[3];
    string *p2FreePizzas = &freePizzas[2];  
    cout << "Free Pizza array: " << freePizzas << endl;
    cout << "Free Pizza pointer: " << *pFreePizzas << endl;
    cout << "Free Pizza pointer without asterisk: " << pFreePizzas << endl;
    cout << "Second Free Pizza pointer: " << *p2FreePizzas << endl;
}
 //
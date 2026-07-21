#include <iostream>
#include <string>
using namespace std;


int main () 
{
    
    int age =21;
    int *pAge = &age;
    string name= "Bro";
    string *pName = &name; 
    cout << "Name: " << name << endl;
    cout << "Address: " << pName << endl;
    cout << "Age: " << age << endl;
    cout << "Age Address: " << pAge << endl;
    cout << "o asteristico: " << *pAge << endl;

 //

}

 //
#include <iostream>
#include <string>
using namespace std;


int main (){
    int numeros[5] = {10, 20, 30, 40, 50};
    int *p = numeros;
        for (int i = 0; i < 5; i++) {
        cout << "address " << (p + i) << endl;
        cout << "oq tem dentro do asteristico: " << *(p + i) << endl;
    
                                    }                
}
 //
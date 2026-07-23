#include <iostream>
#include <string>
using namespace std;

struct Jogador {
    int vida;
    int escudo;
    float velocidade;
};

int main () 
{
    
    Jogador j1;
    
    
    j1.vida = 100;
    j1.escudo = 50;
    j1.velocidade = 2.0f;

    cout << "Vida do Jogador 1 " << j1.vida << endl;

    return 0;
}
 //
#include <iostream>

int main () 
{
    
    std::cout << "digite o primeiro numero de memoria" << std::endl;
    std::string memoryadd1;
    std::cin >> memoryadd1;
    std::cout << "digite o segundo numero de memoria"<< std::endl;;
    std::string memoryadd2;
    std::cin >> memoryadd2;

    std::string temp;

    temp = memoryadd1;
    memoryadd1 = memoryadd2;
    memoryadd2 = temp;

     

    std::cout << "\n--- Valores Invertidos ---" << std::endl;
    std::cout << "Primeiro: " << memoryadd1 << std::endl;
    std::cout << "Segundo: " << memoryadd2 << std::endl;
    return 0;
}
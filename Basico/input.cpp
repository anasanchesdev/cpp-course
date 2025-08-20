#include <iostream>

/*
cout << (operador de inserção -> output -> insere output para o usuario)
cin >> (operador de extração -> input -> extrai input do usuario)
*/
int main(){
    std::string nome;

    // Problema: para de ler a string quando encontrar espaços
    std::cout << "Qual o seu primeiro nome?:\n > ";
    std::cin >> nome;
    std::cout << "Ola " << nome << '\n';

    // Para resolver isso:
    std::cout << "Qual o seu nome completo?:\n > ";
    // Le a string completa mesmo se houver espaços
    // std::ws -> inclui \n ou espaços antes do input
    std::getline(std::cin >> std::ws, nome); 
    std::cout << "Ola " << nome;

    return 0;
}
#include <iostream>

// Operações matemáticas (+ - * /)
// Hierarquia: () > * e / > + e -

int main(){

    int pessoas = 10;
    // Essa sintaxe serve para todas as operações
    // Ao trabalhar com divisão, é recomendável que seja usado double ao invés de int
    pessoas += 1; // ou pessoas++;
    std::cout << pessoas;
    return 0;
}
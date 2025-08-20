#include <iostream>

/*
Conversão de tipos: converter um tipo de estrutura de dado para outro
- Implícito: automático
- Explícito: precede o valor com o novo tipo -> (int) var;
*/

int main(){
    int y = 3.14;  // Implicita
    double x = (int) 3.14;  // Explicita
    std::cout << x << '\n';

    // Aplicação útil, conversão de caracteres de acordo com a tabela ASCII
    char c = 80; // Implicita
    std::cout << c;

    return 0;
}

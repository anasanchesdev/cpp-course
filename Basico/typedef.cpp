#include <iostream>
#include <vector>

/*
Typedef -> criar apelido, identificador, para uma estrutura de dado
Objetivo -> evitar erros de digitação e melhorar legibilidade
Sintaxe -> typedef + estrutura + nome_t
*/

// typedef std::vector<std::pair<std::string, int>> parlista_t;
// typedef std::string texto_t;

// É mais recomendável usar 'using'! -> mais adequado para templates
using texto_t = std::string;

int main(){

    texto_t nome = "Ana";
    std::cout << nome;

    return 0;
}
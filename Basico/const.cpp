#include <iostream>
#include <cmath> // Bilioteca com funções de matemática

/*
"const" especifica que o valor da variável não pode ser alterado ao longo do programa
-> Apenas leitura 
-> Segurança do código
-> Por convenção, as variáveis constantes são maiúsculas

std::pow(base, expoente)
*/ 

// Exemplo: cálculo da área de um círculo
int main(){
    const double PI = 3.1415;
    double raio = 10;
    double area = PI * std::pow(raio, 2);
    std::cout << area << "cm2";

    return 0;
}

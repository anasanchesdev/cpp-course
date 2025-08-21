#include <iostream> 

/*
Sintaxe: 
condicao ? expressao1 : expressao2
- Se a condição for verdadeira, a expressao1 será executada
- Se a condição for falsa, a expressa2 será executada
*/

int main(){
    using namespace std;

    int nota = 8;

    /*
    if (nota > 6){
        cout << "Voce passou!";
    }
    else{
        cout << "Voce foi reprovado!";
    }
    */

    // Equivalente:
    nota > 6 ? cout << "Voce passou!" : cout << "Voce foi reprovado!";

    return 0;
}
#include <iostream>

/*
Namespace: permite que entidades com o mesmo nome existam, desde que tenham namespaces diferentes
-> Útil para prevenir conflitos devido a nomes de variáveis iguais em projetos grandes
*/

// Criação do namespace
namespace primeiro{
    int x = 1;
}
namespace segundo{
    int x = 2;
}

int main(){
    using namespace primeiro; // permite não precisar especificar prefixo de escopo, ex -> primeiro::x 

    int x = 0;

    // Sem prefixo -> refere-se à declaração local 'x = 0' (se não houver using namespace...)
    std::cout << x << '\n';
    
    // Prefixo -> Escopo
    std::cout << primeiro::x << '\n';
    std::cout << segundo::x; 

    return 0;
}

#include <iostream> 
#include <cmath>

int main(){
    using namespace std;

    double a, b;
    char operador;

    while(1){
        cout << "\n\n==CALCULADORA==\n";
        cout << "Operacoes disponiveis:\n+: soma\n-: subtracao\n*: multiplicacao\n/: divisao\n\n";

        cout << "Primeiro numero:\n > ";
        cin >> a;

        cout << "Operador:\n > ";
        cin >> operador;

        cout << "Segundo numero:\n > ";
        cin >> b;

        cout << "\nResultado:\n";

        switch(operador){
            case '+':
                cout << a << operador << b << " = " << a + b;
                break;
            case '-':
                cout << a << operador << b << " = " << a - b;
                break;
            case '*':
                cout << a << operador << b << " = " << a * b;
                break;
            case '/':
                cout << a << operador << b << " = " << a / b;
                break;
            default:
                cout << "Digite um operador valido!";
                break;
        }
    }  
    return 0;
}
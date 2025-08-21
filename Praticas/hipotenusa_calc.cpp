#include <iostream> 
#include <cmath>

int main(){
    using namespace std;
    double a, b, c;

    cout << "==CALCULADORA DE HIPOTENUSA==\n";
    cout << "Insira o valor do cateto a:\n > ";
    cin >> a;

    cout << "Insira o valor do cateto b:\n > ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "Hipotenusa = " << c;

    return 0;
}
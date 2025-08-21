#include <iostream> 

int main(){
    using namespace std;
    
    int idade;
    cout << "Digite sua idade: \n > ";
    cin >> idade;

    if ((idade >= 100)||(idade < 0)){
        cout << "Digite uma idade valida!";
    }
    else if (idade >= 18){
        cout << "Maior de idade!";
    }
    else {
        cout << "Menor de idade!";
    }

    return 0;
}
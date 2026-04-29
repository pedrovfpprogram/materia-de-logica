#include <iostream>
#include "chamadas.hpp"
using namespace std;

int main(){
    while (true) {
        int escolha;
        cout << "Digite o que fazer:\n1 - Soma\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n5 - Sair" << endl;
        cin >> escolha;
        if (escolha == 1) {
            int a,b;
            cout << "Digite um primeiro número: ";
            cin >> a;
            cout << "Digite um segundo número: ";
            cin >> b;
            int res = soma(a,b);
            cout << "O resultado da soma é " << res << endl;
        } else if (escolha == 2) {
            int a,b;
            cout << "Digite um primeiro número: ";
            cin >> a;
            cout << "Digite um segundo número: ";
            cin >> b;
            int res = subtracao(a,b);
            cout << "O resultado da subtração é "  << res << endl;
        } else if (escolha == 3) {
            int a,b;
            cout << "Digite um primeiro número: ";
            cin >> a;
            cout << "Digite um segundo número: ";
            cin >> b;
            int res = multiplicar(a,b);
            cout << "O resultado da multiplicação é "  << res << endl;
        } else if (escolha == 4) {
            int a,b;
            cout << "Digite um primeiro número: ";
            cin >> a;
            cout << "Digite um segundo número: ";
            cin >> b;
            int res = dividir(a,b);
            cout << "O resultado da divisão é "  << res << endl;
        } else {
            break;
        }
    }
    return 0;
}
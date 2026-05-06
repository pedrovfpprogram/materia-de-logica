#include <iostream>

using namespace std;

int soma(int a, int b){
    return a + b;
}
int subtracao(int a, int b){
    return a - b;
}
int multiplicacao(int a, int b){
    return a * b;
}
int main(){
    while (true){
        int opcao;
        cout << "Qual operação que você quer aprender:\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Sair do programa\nDigite a opção: ";
        cin >> opcao;
        if (opcao==1){
            int n1;
            cout << "Qual número você quer aprender: ";
            cin >> n1;
            cout << "Tabuada da soma do numero " << n1 << endl;
            for (int i = 0; i < 11; i++){
                cout << n1 << "+" << i << "=" << soma(n1,i) << endl;
            } 
        } else if (opcao==4){
                break;
        } else if (opcao==2){
            int n1;
            cout << "Qual número você quer aprender: ";
            cin >> n1;
            cout << "Tabuada da subtracao do numero " << n1 << endl;
            for (int i = 0; i < 11; i++){
                cout << n1 << "-" << i << "=" << subtracao(n1,i) << endl;
            } 
        } else if (opcao==3){
            int n1;
            cout << "Qual número você quer aprender: ";
            cin >> n1;
            cout << "Tabuada da multiplicacao do numero " << n1 << endl;
            for (int i = 0; i < 11; i++){
                cout << n1 << "x" << i << "=" << multiplicacao(n1,i) << endl;
            }
        } else {
            cout << "Opcao não encontrada!" << endl;
        }
}
    return 0;
}
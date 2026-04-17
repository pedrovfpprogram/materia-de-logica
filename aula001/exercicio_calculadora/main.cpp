#include <iostream>
//O que vem dentro de <> já vem como padrão do C++
//Unidade de pré-processamento de entrada e saída padrão
//Diretiva de pré-processamento, ou seja, é uma instrução para o pré-processador do C++ incluir o conteúdo do arquivo iostream no programa
int somar(int a, int b) 
{
    return a + b;
}
int main() 
{
    int resultado = somar(5, 3);
    // Variáveis:
    //São usadas para armazenar dados temporariamente durante a execução do programa
    //Cada variável tem um tipo de dado associado, como int, float, char, etc.
    //Exemplo de declaração de variável:
    std::cout << "O valor da variavel é: " << resultado << std::endl;
    //std::cout é o objeto de saída padrão em C++, usado para imprimir na tela
    //<< é o operador de inserção, usado para enviar dados para o fluxo de saída
    //"Olá, Mundo!" é a string que será impressa na tela
    //std::endl é um manipulador de fluxo que insere um caractere de nova linha e limpa o buffer de saída, garantindo que a saída seja exibida imediatamente
    return 0;
}
//Função principal do programa, onde a execução começa, é obrigatória
//int main() {corpo da função} é obrigatório usar int e main, pois é a convenção para a função principal em C++
//tipo nome da função(parâmetros) {corpo da função} é a sintaxe para definir uma função em C++

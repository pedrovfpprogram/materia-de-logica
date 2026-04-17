#include <iostream>

int somar(int a, int b) 
{
    return a + b;
}
int subtrair(int a, int b) 
{
    return a - b;
}
int multiplicar(int a, int b) 
{
    return a * b;
}
float dividir(float a, float b) 
{
    return a / b;
}

int main() {
    std::cout << "Resultado da soma: " << somar(5, 3) << std::endl;
    std::cout << "Resultado da subtracao: " << subtrair(5, 3) << std::endl;
    std::cout << "Resultado da multiplicacao: " << multiplicar(5, 3) << std::endl;
    std::cout << "Resultado da divisao: " << dividir(5, 3) << std::endl;
    std::cout << "Final do programa." << std::endl;
    return 0;
}
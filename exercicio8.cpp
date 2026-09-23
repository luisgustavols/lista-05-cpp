#include <iostream>

int somar(int a, int b) {
    return a + b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int main() {
    int x = 6;
    int y = 4;

    int (*operacao)(int, int);

    operacao = somar;
    std::cout << "Resultado da soma (" << x << " + " << y << "): " << operacao(x, y) << std::endl;

    operacao = multiplicar;
    std::cout << "Resultado da multiplicacao (" << x << " * " << y << "): " << operacao(x, y) << std::endl;

    return 0;
}
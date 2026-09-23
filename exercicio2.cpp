#include <iostream>

int main() {
    const int TAMANHO = 100;
    double a[TAMANHO];
    int n;

    std::cout << "Quantos valores deseja digitar (maximo 100)? ";
    std::cin >> n;

    if (n <= 0 || n > TAMANHO) {
        std::cout << "Quantidade invalida!" << std::endl;
        return 1;
    }

    std::cout << "\n-Leitura dos Valores-" << std::endl;
    for (int j = 0; j < n; j++) {
        std::cout << "Digite o valor " << j + 1 << ": ";
        std::cin >> *(a + j);
    }

    double* aPtr = a;
    double soma = 0.0;

    for (int j = 0; j < n; j++) {
        soma += *(aPtr + j);
    }

    double media = soma / n;

    std::cout << "\n-Resultados-" << std::endl;
    std::cout << "Soma total: " << soma << std::endl;
    std::cout << "Media aritmetica: " << media << std::endl;

    return 0;
}
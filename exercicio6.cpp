#include <iostream>

int main() {
    int N;

    std::cout << "Digite a quantidade N de elementos: ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "A quantidade deve ser maior que zero." << std::endl;
        return 1;
    }

    int* vetor = new int[N];

    std::cout << "Digite os " << N << " valores:" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cout << "Elemento [" << i << "]: ";
        std::cin >> vetor[i];
    }

    int maior = vetor[0];
    for (int i = 1; i < N; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    std::cout << "\nO maior valor no vetor e: " << maior << std::endl;

    delete[] vetor;
    vetor = nullptr;

    return 0;
}
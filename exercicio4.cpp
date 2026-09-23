#include <iostream>

int main() {
    
    int valores[5] = {10, 20, 30, 40, 50};

    int* ptr = valores;

    std::cout << " Elementos do Array e Enderecos de Memoria -" << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << "Elemento " << i << ": "
                  << "Valor = " << *(ptr + i)
                  << " | Endereco = " << (ptr + i)
                  << std::endl;
    }

    return 0;
}
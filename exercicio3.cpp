#include <iostream>

int main() {
    
    int val = 50;
    int* ptr = &val;

    *ptr = 100;

    std::cout << "Valor final de 'val' (acesso direto): " << val << std::endl;
    std::cout << "Valor final de 'val' (via *ptr): " << *ptr << std::endl;

    return 0;
}
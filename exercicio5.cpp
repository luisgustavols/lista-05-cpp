#include <iostream>

int main() {
    
    float* ptr = new float;

    std::cout << "Digite um numero decimal (float): ";
    std::cin >> *ptr;

    float quadrado = (*ptr) * (*ptr);
    std::cout << "O quadrado de " << *ptr << " e: " << quadrado << std::endl;

    delete ptr;
    ptr = nullptr; 

    return 0;
}
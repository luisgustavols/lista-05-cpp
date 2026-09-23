#include <iostream>


void inverterSinais(int *a, int *b) {
    if (a != nullptr) {
        *a = -(*a);
    }
    if (b != nullptr) {
        *b = -(*b);
    }
}

int main() {
    int x = 15;
    int y = -25;

    std::cout << " Antes da chamada da funcao -" << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    inverterSinais(&x, &y);

    std::cout << "\n Depois da chamada da funcao -" << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    return 0;
}
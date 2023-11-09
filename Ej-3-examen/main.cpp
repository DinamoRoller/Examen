#include <iostream>

int main() {
    int num1 = 10;
    int num2 = 20;



    //se crean punteros para las variables
    int* ptr1 = &num1;
    int* ptr2 = &num2;

    //se intercambian los valores a traves de punteros
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    // se muestran los valores intercambiados
    std::cout << "Despues del intercambio: " << std::endl;
    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;

    return 0;
}
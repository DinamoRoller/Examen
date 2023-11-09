#include <iostream>
#include <string>

void dividir(int numerador, int denominador) {
    if (denominador == 0) {
        throw std::runtime_error("Intento de division por cero");

    }
    int resultado = numerador / denominador;
    std::cout << "Resultado de la division: " << resultado << std::endl;

}

int main() {
    try {
        int numerador = 10;
        int denominador = 0;
        dividir(numerador, denominador);
    } catch (const std::exception& e) {
        std::cerr << "Se produjo una excepcion: " << e.what() << std::endl;
    }

    return 0;
}
#include <iostream>

int sumaEnteros(int num1, int num2) {
    int suma = num1 + num2;
    return suma;
}

int main() {
    int numero1, numero2;

    // solicitud al usuario de los numeros a sumar
    std::cout << "Introduzca el primer numero:";
    std::cin >> numero1;
    std::cout << "Introduzca el segundo numero:";
    std::cin >> numero2;

    //funcion para sumar los numeros

    int resultado = sumaEnteros(numero1, numero2);

    //Muestra el resultado

    std::cout << "La suma de " << numero1 << " y " << numero2 << " es: " << resultado << std::endl;
    return 0;
}
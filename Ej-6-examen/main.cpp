#include <iostream>
#include <vector>

double calcularPromedio(const std::vector<int>& calificaciones) {
    if (calificaciones.empty()) {
        return 0.0;
    }
    int suma = 0;
    for (int calificacion : calificaciones) {
        suma += calificacion;
    }

    double promedio = static_cast<double>(suma) / calificaciones.size() ;
    return promedio;

}

int main() {
    std::vector<int> calificaciones;
    int numero;
    char continuar;

    do {
        std::cout << "Introduzca un numero entero: ";
        std::cin >> numero;
        calificaciones.push_back(numero);

        std::cout << "Quiere agregar otro numero? (s/n): ";
        std::cin >> continuar;
    } while (continuar == 's' || continuar == 's');

    if (calificaciones.empty()) {
        std::cout << "No se introdujo ningun numero" << std::endl;
    } else {

        //se usa la funcion para calcular el promedio
        double promedio = calcularPromedio(calificaciones);
        std::cout << "El promedio de las calificaciones es: " << promedio << std::endl;
    }

    return 0;
}


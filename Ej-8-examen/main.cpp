#include <iostream>
#include <vector>
#include <string>
#include <map>
class Estudiante {
public:
    std::string nombre;
    std::string grado;

    Estudiante(const std::string & nombre, const std::string& grado)
    : nombre(nombre), grado(grado) {

    }
};

int main() {
    std::vector<Estudiante> listaEstudiantes;
    std::map<std::string, int> conteoGrados;

    char continuar;

    do {
        std::string nombre, grado;

        std::cout << "Introduzca el nombre del estudiante: ";
        std::cin >> nombre;
        std::cout << "Ingrese el grado del estudiante: ";
        std::cin >> grado;

        Estudiante estudiante(nombre, grado);
        listaEstudiantes.push_back(estudiante);

        conteoGrados[grado]++;

        std::cout << "Quiere agregar otro estudiante? (s/n): ";
        std::cin >> continuar;
    } while (continuar == 's' || continuar == 's');


    for ( const auto& par : conteoGrados) {
        std::cout << "Grado: " << par.first << ", Cantidad de estudiantes: " << par.second << std::endl;
    }

    return 0;
}
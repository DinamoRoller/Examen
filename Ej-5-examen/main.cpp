#include <iostream>
#include <string>
#include <vector>

class Estudiante {
public:
    // propiedades de la clase

    std::string nombre;
    int edad;
    std::string grado;
    std::vector<std::string> materias;

    void mostrar_info() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << "años" << std::endl;
        std::cout << "Grado: " << grado << std::endl;
    }

    void registrar_materia(const std::string& materia) {
        materias.push_back(materia);
    }

    void mostrar_materias() {
        std::cout << "Materias registradas: " << std::endl;
        for (const std::string& materia : materias) {
            std::cout << " - " << materia << std::endl;
        }
    }
};

int main() {
    Estudiante estudiante1;
    estudiante1.nombre = "Alberto";
    estudiante1.edad = 23;
    estudiante1.grado = "Grado 14";

    estudiante1.registrar_materia("matematicas");
    estudiante1.registrar_materia("Fisica");
    estudiante1.registrar_materia("Programacion");

    estudiante1.mostrar_info();
    estudiante1.mostrar_materias();

    return 0;
}
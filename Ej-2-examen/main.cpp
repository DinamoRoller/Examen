#include <iostream>
#include <string>

class Estudiante {
public:

    std::string nombre;
    int edad;
    std::string grado;

    void mostrar_info() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Grado: " << grado << std::endl;
    }
};

int main() {

    //se crea una instancia de la clase estudiante
    Estudiante estudiante1;
     // se asignan valores a las propiedades del estudiante
     estudiante1.nombre = "Pedro";
     estudiante1.edad = 22;
     estudiante1.grado = "Grado 12";

     //se llama a la funcion miembro para mostrar la informacion

     estudiante1.mostrar_info();
     return 0;
}
#include <iostream>
#include <string>
class Profesor {
public:
    std::string nombre;
    int edad;
    std::string materiaImparte;
    int añosExperiencia;

    //constructor de la clase profesor
    Profesor(const std::string& nombre, int edad, const std::string& materia, int experiencia)
    : nombre(nombre), edad(edad), materiaImparte(materia), añosExperiencia(experiencia) {

    }

    // funcion que muestra la informacion del profesor
    void mostrar_info_profesor() {
        std::cout << "Nombre del profesor: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Materia que imparte: " << materiaImparte << std::endl;
        std::cout << "Años de experiencia: " << añosExperiencia << std::endl;
    }
};

int main() {
    // creamos un objeto de la clase profesor
    Profesor profesor("Jose", 50, "Informatica", 14);

    // se llama a la funcion que muestra la informacion del profesor
    profesor.mostrar_info_profesor();

    return 0;
}
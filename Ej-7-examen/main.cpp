#include <iostream>
#include <string>

class RegistroAsistencia {
public:
    //propiedades de la clase
    std::string fecha;
    std::string estado;

    //funcion para registrar la fecha y el estado
    RegistroAsistencia(const std::string& fecha, const std::string& estado)
    : fecha(fecha), estado(estado) {

    }

    //funcion que muestra la asistencia
    void mostrar_asistencia() {
        std::cout << "Fecha: " << fecha << std::endl;
        std::cout << "Estado: " << estado << std::endl;
    }
};

int main() {
    RegistroAsistencia registro("09-11-2023","Asistio");

    registro.mostrar_asistencia();
    return 0;
}

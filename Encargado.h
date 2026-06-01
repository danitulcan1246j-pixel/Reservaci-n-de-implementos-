#ifndef Encargado.h
#define Encargado.h
#include <string>
class Encargado {
public:
    int idEmpleado;
    std::string nombre;
    std::string turno;
    int nivelAcceso;
    bool validarEntrega();
    void autorizarPrestamo();
};
#endif

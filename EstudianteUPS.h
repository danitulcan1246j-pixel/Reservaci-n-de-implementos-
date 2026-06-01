#ifndef EstudianteUPS.h
#define EstudianteUPS.h
#include <string>

class EstudianteUPS {
public:
    int idEstudiante;
    std::string nombre, email, telefono, carrera, cedula, foto, ciudad;
    int edad;

    void registrarse();
    void ingresar();
    int solicitarPrestamo();
    void devolverArticulo();
    void actualizarDatos();
    void imprimir();
};
#endif

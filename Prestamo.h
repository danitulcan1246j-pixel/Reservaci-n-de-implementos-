#ifndef Prestamo.h
#define Prestamo.h
#include "EstudianteUPS.h"
#include "Articulo.h"

class Prestamo {
public:
    int idPrestamo;
    EstudianteUPB* estudiante;
    Articulo* articulo;
    std::string estado;
};
#endif

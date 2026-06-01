#ifndef GestorPrestamos.h
#define GestorPrestamos.h
#include <vector>
#include "EstudianteUSB.h"
#include "Articulo.h"

class GestorPrestamos {
private:
    std::vector<EstudianteUPB> estudiantes;
    
public:
    void agregarEstudiante(EstudianteUPB e) { estudiantes.push_back(e); }
    void listarEstudiantes();
    
};
#endif

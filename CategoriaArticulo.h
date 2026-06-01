#ifndef CategoriaArticulo.h
#define CategoriaArticulo.h
#include <string>

class CategoriaArticulo {
public:
    int idCategoria;
    std::string nombreCategoria;
    std::string codigoRack;
    int prioridadMantenimiento;
};
#endif

#ifndef Articulo.h
#define Articulo.h
#include <string>
#include "CategoriaArticulo.h"

class Articulo {
protected:
    int idArticulo;
    std::string nombre;
    std::string estado;
    bool disponible;
public:
    CategoriaArticulo categoria;
    virtual ~Articulo() {}
    virtual bool verificarDisp() = 0;
};
#endif

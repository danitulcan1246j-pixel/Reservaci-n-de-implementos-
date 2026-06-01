#ifndef Articulo.h
#define Articulo.h
#include <string>
#include <iostream>
#include "CategoriaArticulo.h"

using namespace std;

class Articulo {
private:
    int idArticulo;
    string nombre;
    string estado;
    string descripcion;
    bool disponible;

public:
    CategoriaArticulo categoria;

    Articulo();
    Articulo(int _id, string _nombre, string _estado, string _desc, bool _disponible);
    virtual ~Articulo();

    void setIdArticulo(int _id);
    int getIdArticulo() const;
    void setNombre(string _nombre);
    string getNombre() const;
    void setEstado(string _estado);
    string getEstado() const;
    void setDescripcion(string _desc);
    string getDescripcion() const;
    void setDisponible(bool _disponible);
    bool getDisponible() const;

    virtual bool verificarDisp();
    virtual void cambiarEstado(string _estado);
    virtual string obtenerInfo();
    virtual void imprimir() const;
};
#endif
